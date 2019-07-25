//
//  main.cpp
//  C++ Certificate
//  Exact Solutions of One-Factor Plain Options
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "Option.hpp"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

namespace Batch1
{
	double T = 0.25; double K = 65; double sig = 0.30; double r = 0.08; double S = 60; double b = 0.08;
};
namespace Batch2
{
	double T = 1.0; double K = 100; double sig = 0.2; double r = 0.0; double S = 100; double b = 0.0;
};
namespace Batch3
{
	double T = 1.0; double K = 10; double sig = 0.50; double r = 0.12; double S = 5; double b = 0.12;
};
namespace Batch4
{
	double T = 30.0; double K = 100.0; double sig = 0.30; double r = 0.08; double S = 100.0; double b = 0.08;
};

using namespace Batch1; 
// using namespace Batch2; 
// using namespace Batch3;
// using namespace Batch4;

double CalltoPut(double T, double K, double C, double r, double S)
{
	return C + K * exp(-r * T) - S;
}

double PuttoCall(double T, double K, double P, double r, double S)
{
	return P + S - K * exp(-r * T);
}

vector<double> ProduceMeshArray(double start, double step, int size)
{
	vector<double> mesh;
	for (int i = 0; i != size; i++)
	{
		mesh.push_back(start + step * i);
	}
	return mesh;
}

vector<vector<double>> create_input_matrix()
{
	vector<vector<double>> input_matrix;

	int n;
	cout << "Number of option parameters: ";
	cin >> n;

	for (int i = 0; i != n; i++)
	{
		vector<double> input_vector;
		double start, step; int size;
		int m;

		cout << "Parameter " << i + 1 << " is:\n1. T\n2. K\n3. sig\n4. r\n5. S\n6. b\n";
		cin >> m;
		input_vector.push_back(m);

		cout << "For parameter " << i + 1 << ", the option a call or a put:\n1. Call\n2. Put\n";
		cin >> m;
		input_vector.push_back(m);

		cout << "For parameter " << i + 1 << ", please input its starting value, step size and vector size:\n";
		cin >> start >> step >> size;
		input_vector.push_back(start);
		input_vector.push_back(step);
		input_vector.push_back(size);

		cout << "For parameter " << i + 1 << ", the output should be:\n1. Price\n2. Delta\n3. Gamma\n";
		cin >> m;
		input_vector.push_back(m);

		input_matrix.push_back(input_vector);
	}
	return input_matrix;
}

vector<vector<double>> matrix_pricer(vector<vector<double>> input_vector)
{
	vector<vector<double>> result;
	for (int i = 0; i != input_vector.size(); i++)
	{
		vector<double> result_vector;
		vector<double> mesh = ProduceMeshArray(input_vector[i][2], input_vector[i][3], input_vector[i][4]);
		
		double original_T = T; double original_K = K; double original_sig = sig; double original_r = r; double original_S = S; double original_b = b;

		for (int j = 0; j != mesh.size(); j++)
		{

			switch ((int)input_vector[i][0])
			{
			case 1: T = mesh[j]; break;
			case 2: K = mesh[j]; break;
			case 3: sig = mesh[j]; break;
			case 4: r = mesh[j]; break;
			case 5: S = mesh[j]; break;
			case 6: b = mesh[j]; break;
			}

			switch ((int)input_vector[i][5])
			{
			case 1: 
				(input_vector[i][1] == 1) ? result_vector.push_back(Option(T, K, sig, r, S, b).Call()) : result_vector.push_back(Option(T, K, sig, r, S, b).Put());
				break;
			case 2: 
				(input_vector[i][1] == 1) ? result_vector.push_back(Option(T, K, sig, r, S, b).CallDelta()) : result_vector.push_back(Option(T, K, sig, r, S, b).PutDelta());
				break;
			case 3:
				result_vector.push_back(Option(T, K, sig, r, S, b).Gamma());
				break;
			}
		}
		result.push_back(result_vector);

		T = original_T; K = original_K; sig = original_sig; r = original_r; S = original_S; b = original_b;
	}
	return result;
}

int main()
{
	// (a) Implement the formulae for call and put option pricing using the data sets.
	Option option(T, K, sig, r, S, b);
	cout << "Call: " << option.Call() << endl;
	cout << "Put: " << option.Put() << endl;

	// (b) Apply the put-call parity relationship to compute call and put option prices.
	cout << PuttoCall(T, K, option.Put(), r, S) << endl;
	cout << CalltoPut(T, K, option.Call(), r, S) << endl;

	// (c) Call the option pricing formulae for each value S and each computed option price will be stored in a std::vector<double> object.
	vector<double> S_mesh = ProduceMeshArray(10, 1, 41);
	vector<double> CallPrice;

	for (int i = 0; i != S_mesh.size(); i++)
	{
		CallPrice.push_back(Option(T, K, sig, r, S_mesh[i], b).Call());
		cout << "S=" << S_mesh[i] << ", " << CallPrice[i] << endl;
	}

	// (d) Input a matrix of option parameters and receive a matrix of option prices as the result. 
	vector<vector<double>> input_matrix = create_input_matrix();
	vector<vector<double>> matrix_price = matrix_pricer(input_matrix);

	for (int i = 0; i != matrix_price.size(); i++)
	{
		for (int j = 0; j != matrix_price[i].size(); j++)
		{
			cout << matrix_price[i][j] << endl;
		}
		cout << endl;
	}

	// Option Sensitivities, aka the Greeks 
	T = 0.5; K = 100; sig = 0.36; r = 0.1; S = 105; b = 0.0;

	// (a) Implement the above formulae for gamma for call and put future option pricing using the data set.
	Option option2(T, K, sig, r, S, b);
	cout << "Call Delta: " << option2.CallDelta() << endl;
	cout << "Put Delta: " << option2.PutDelta() << endl;
	cout << "Gamma: " << option2.Gamma() << endl;

	// (b) Compute call delta price for a monotonically increasing range of underlying values of S.
	vector<double> OptionCallDelta;
	vector<double> S_mesh2 = ProduceMeshArray(70, 1, 36);
	
	for (int i = 0; i != S_mesh2.size(); i++)
	{
		OptionCallDelta.push_back(Option(T, K, sig, r, S_mesh2[i], b).CallDelta());
		cout << "S=" << S_mesh2[i] << ", " << OptionCallDelta[i] << endl;
	}

	// (c) Input a matrix of option parameters and receive a matrix of either Delta or Gamma as the result.
	vector<vector<double>> input_matrix2 = create_input_matrix();
	vector<vector<double>> matrix_greek = matrix_pricer(input_matrix2);

	for (int i = 0; i != matrix_greek.size(); i++)
	{
		for (int j = 0; j != matrix_greek[i].size(); j++)
		{
			cout << matrix_greek[i][j] << endl;
		}
		cout << endl;
	}

	// (d) Use divided differences to approximate option sensitivities.
	for (int power = 0; power != 3; ++power)
	{
		double h = pow(0.1, power);
		cout << "When h = " << h << ":\n";
		cout << "Call Delta: " << option2.CallDelta(h) << endl;
		cout << "Put Delta: " << option2.PutDelta(h) << endl;
		cout << "Gamma: " << option2.Gamma(h) << endl;

		OptionCallDelta.clear();
		for (int i = 0; i != S_mesh2.size(); i++)
		{
			OptionCallDelta.push_back(Option(T, K, sig, r, S_mesh2[i], b).CallDelta(h));
			cout << "S=" << S_mesh2[i] << ", " << OptionCallDelta[i] << endl;
		}
	}
	return 0;
}