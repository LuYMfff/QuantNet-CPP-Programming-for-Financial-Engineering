//
//  main.cpp
//  C++ Certificate
//  Perpetual American Options
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "PerpetualOption.hpp"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

namespace Batch1
{
	double K = 100; double sig = 0.1; double r = 0.1; double S = 110; double b = 0.02;
};
using namespace Batch1;


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

		cout << "Parameter " << i + 1 << " is:\n1. T(no longer useful here)\n2. K\n3. sig\n4. r\n5. S\n6. b\n";
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

		double original_K = K; double original_sig = sig; double original_r = r; double original_S = S; double original_b = b;

		for (int j = 0; j != mesh.size(); j++)
		{

			switch ((int)input_vector[i][0])
			{
			case 2: K = mesh[j]; break;
			case 3: sig = mesh[j]; break;
			case 4: r = mesh[j]; break;
			case 5: S = mesh[j]; break;
			case 6: b = mesh[j]; break;
			}
			(input_vector[i][1] == 1) ? result_vector.push_back(PerpetualOption(K, sig, r, S, b).Call()) : result_vector.push_back(PerpetualOption(K, sig, r, S, b).Put());
		}
		result.push_back(result_vector);

		K = original_K; sig = original_sig; r = original_r; S = original_S; b = original_b;
	}
	return result;
}

int main()
{
	// (b) Implement the formulae for call and put option pricing using the data sets.
	PerpetualOption option(K, sig, r, S, b);
	cout << "Call: " << option.Call() << endl;
	cout << "Put: " << option.Put() << endl;

	// (c) Call the option pricing formulae for each value S and each computed option price will be stored in a std::vector<double> object.
	vector<double> S_mesh = ProduceMeshArray(10, 1, 41);
	vector<double> CallPrice;

	for (int i = 0; i != S_mesh.size(); i++)
	{
		CallPrice.push_back(PerpetualOption(K, sig, r, S_mesh[i], b).Call());
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

	return 0;
}