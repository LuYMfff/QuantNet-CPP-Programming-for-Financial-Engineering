//  main.cpp
//  C++ Certificate
//  Finite Difference Methods (Introduction) 
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//


#include "FdmDirector.hpp"

#include <iostream>
#include <string>
using namespace std;

#include "UtilitiesDJD/ExcelDriver/ExcelDriverLite.hpp"

namespace BS // Black Scholes
{
	
	double sig = 0.3;
	double K = 65.0;
	double T = 0.25;
	double r = 0.08;
	double D = 0.0; // aka q
	

	 //double T = 0.25; double K = 65; double sig = 0.30; double r = 0.08; double D = 0.0; // Batch1
	 //double T = 1.0; double K = 100; double sig = 0.2; double r = 0.0; double D = 0.0; // Batch2
	//double T = 1.0; double K = 10; double sig = 0.50; double r = 0.12; double D = 0.0; // Batch3
	 //double T = 30.0; double K = 100.0; double sig = 0.30; double r = 0.08; double D = 0.0; // Batch4
	
	double mySigma (double x, double t)
	{

		double sigmaS = sig*sig;

		return 0.5 * sigmaS * x * x;
	}

	double myMu (double x, double t)
	{
		
		return (r - D) * x;
	
	}

	double myB (double x, double t)
	{	
	
		return  -r;
	}

	double myF (double x, double t)
	{
		return 0.0;
	}

	double myBCL (double t)		
	{
		// Put
		 return K *exp(-r * t);

		// Call
		 //return 0.0; // C
	}

	double myBCR (double t)
	{
			
		// Put
		 return 0.0; // P

		// Call
		 //return 5.0 * BS::K; // C
	}

	double myIC (double x)
	{ // Payoff 
	
		// Put
		 return max(K - x, 0.0);
		
		// Call
		// return max(x - K, 0.0);
	}

}


int main()
{
	using namespace ParabolicIBVP;

	// Assignment of functions
	sigma = BS::mySigma;
	mu = BS::myMu;
	b = BS::myB;
	f = BS::myF;
	BCL = BS::myBCL;
	BCR = BS::myBCR;
	IC = BS::myIC;

	int J = static_cast<int>(5*BS::K); int N = 10000-1; // k = O(h^2) !!!!!!!!!

	double Smax = 5*BS::K;			// Magix

	cout << "start FDM\n";
	FDMDirector fdir(Smax, BS::T, J, N);

	fdir.doit();
	
	cout << "Finished\n";

	// Have you Excel installed (ExcelImports.cpp)
	printOneExcel(fdir.xarr, fdir.current(), string("Value"));

	return 0;
}
