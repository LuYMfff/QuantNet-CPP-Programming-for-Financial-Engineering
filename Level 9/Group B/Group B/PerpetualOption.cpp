//
//  Option.cpp
//  C++ Certificate
//  Source file for the Option class.
//
//  Created by NELSON YEUNG on 30/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "PerpetualOption.hpp"
#include <cmath>

PerpetualOption::PerpetualOption() : K(0.0), sig(0.0), r(0.0), S(0.0), b(0.0) // default constructor
{
}
PerpetualOption::~PerpetualOption() // destructor
{
}
PerpetualOption::PerpetualOption(double strike, double vol, double risk_free, double spot, double cost) : K(strike), sig(vol), r(risk_free), S(spot), b(cost)
{
}

double PerpetualOption::Call() const
{
	double y1 = 0.5 - b / sig / sig + sqrt(pow(b / sig / sig - 0.5, 2) + 2 * r / sig / sig);
	return K / (y1 - 1) * pow((y1 - 1) / y1 * S / K, y1);
}
double PerpetualOption::Put() const
{
	double y2 = 0.5 - b / sig / sig - sqrt(pow(b / sig / sig - 0.5, 2) + 2 * r / sig / sig);
	return K / (1 - y2) * pow((y2 - 1) / y2 * S / K, y2);
}

