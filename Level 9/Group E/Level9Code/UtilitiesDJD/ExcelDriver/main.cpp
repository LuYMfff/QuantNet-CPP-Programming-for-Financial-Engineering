//  main.cpp
//  C++ Certificate
//  Excel Visualization
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "ExcelDriverLite.hpp"
#include "Utilities.hpp"
#include <cmath>
#include <list>
#include <string>
#include <vector>
#include <boost/math/distributions/normal.hpp>

namespace Batch1
{
 double T = 0.25; double K = 65; double sig = 0.30; double r = 0.08; double b = 0.08;
};
using namespace Batch1; 
using namespace boost::math;

double Call(double S)
{
    normal_distribution<> N(0.0, 1.0);
	double d1 = (log(S / K) + (b + (sig * sig / 2.0)) * T) / (sig * sqrt(T));
	double d2 = d1 - sig * sqrt(T);
	return S * exp((b - r) * T) * cdf(N, d1) - K * exp(-r * T) * cdf(N, d2);
}

double Put(double S)
{
 normal_distribution<> N(0.0, 1.0);
 double d1 = (log(S / K) + (b + (sig * sig / 2.0)) * T) / (sig * sqrt(T));
 double d2 = d1 - sig * sqrt(T);
 return (K * exp(-r * T) * cdf(N, -d2)) - (S * exp((b - r) * T) * cdf(N, -d1));
}

int main()
{
	long N = 40;

	double A = 10.0;  double B = 50.0;
	auto x = CreateMesh(N, A,B);

	auto vec1 = CreateDiscreteFunction< std::vector<double>>(x, Call);

	ExcelDriver xl; xl.MakeVisible(true);
	xl.CreateChart(x, vec1, "Option price for a range of S");

	return 0;
}

