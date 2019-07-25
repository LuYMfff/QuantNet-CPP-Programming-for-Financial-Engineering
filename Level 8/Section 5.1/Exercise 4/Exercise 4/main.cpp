//
//  main.cpp
//  C++ Certificate
//  Random Number Generation
//
//  Created by NELSON YEUNG on 28/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include <boost/random.hpp>
#include <ctime>
#include <map>
#include <iostream>

using namespace std;

int main()
{
	// Throwing dice.
	// Mersenne Twister.
	boost::random::mt19937 myRng;

	// Set the seed.
	myRng.seed(static_cast<boost::uint32_t> (std::time(0)));

	// Uniform in range [1,6]
	boost::random::uniform_int_distribution<int> six(1, 6);

	map<int, long> statistics; // Structure to hold outcome + frequencies
	int outcome; // Current outcome

	outcome = six(myRng);

	long trials, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
	cout << "How many trials? ";
	cin >> trials;

	// Generate a large number of trials and place their frequencies in map.
	for (int i = 0; i < trials; i++)
	{
		outcome = six(myRng);
		statistics[outcome]++;
	}

	// Output the result.
	for (int i = 1; i <= 6; i++)
	{
		cout << "Trial " << i << " has " << (double)statistics[i] / trials * 100 << "% outcomes" << endl;
	}

	return 0;
}