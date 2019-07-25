//
//  Option.cpp
//  C++ Certificate
//  Source file for the Option class.
//
//  Created by NELSON YEUNG on 30/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//

#include "Option.hpp"
#include <boost/math/distributions/normal.hpp>
#include <cmath>

using namespace boost::math;

Option::Option() : T(0.0), K(0.0), sig(0.0), r(0.0), S(0.0), b(0.0) // default constructor
{
}
Option::~Option() // destructor
{
}
Option::Option(double time, double strike, double vol, double risk_free, double spot, double cost) : T(time), K(strike), sig(vol), r(risk_free), S(spot), b(cost)
{
}

double Option::Call() const
{
	normal_distribution<> N(0.0, 1.0);
	double d1 = (log(S / K) + (b + (sig * sig / 2.0)) * T) / (sig * sqrt(T));
	double d2 = d1 - sig * sqrt(T);
	return S * exp((b - r) * T) * cdf(N, d1) - K * exp(-r * T) * cdf(N, d2);
}

double Option::Call(double h) const
{
	double new_S = S + h;
	normal_distribution<> N(0.0, 1.0);
	double d1 = (log(new_S / K) + (b + (sig * sig / 2.0)) * T) / (sig * sqrt(T));
	double d2 = d1 - sig * sqrt(T);
	return new_S * exp((b - r) * T) * cdf(N, d1) - K * exp(-r * T) * cdf(N, d2);
}

double Option::Put() const
{
	normal_distribution<> N(0.0, 1.0);
	double d1 = (log(S / K) + (b + (sig * sig / 2.0)) * T) / (sig * sqrt(T));
	double d2 = d1 - sig * sqrt(T);
	return (K * exp(-r * T) * cdf(N, -d2)) - (S * exp((b - r) * T) * cdf(N, -d1));

}

double Option::Put(double h) const
{
	double new_S = S + h;
	normal_distribution<> N(0.0, 1.0);
	double d1 = (log(new_S / K) + (b + (sig * sig / 2.0)) * T) / (sig * sqrt(T));
	double d2 = d1 - sig * sqrt(T);
	return (K * exp(-r * T) * cdf(N, -d2)) - (new_S * exp((b - r) * T) * cdf(N, -d1));

}



double Option::CallDelta() const
{
	normal_distribution<> N(0.0, 1.0);
	double d1 = (log(S / K) + (b + (sig * sig / 2.0)) * T) / (sig * sqrt(T));
	return exp((b - r) * T) * cdf(N, d1);
}


double Option::PutDelta() const
{
	normal_distribution<> N(0.0, 1.0);
	double d1 = (log(S / K) + (b + (sig * sig / 2.0)) * T) / (sig * sqrt(T));
	return - exp((b - r) * T) * cdf(N, - d1);
}

double Option::Gamma() const
{
	normal_distribution<> N(0.0, 1.0);
	double d1 = (log(S / K) + (b + (sig * sig / 2.0)) * T) / (sig * sqrt(T));
	return pdf(N, d1) * exp((b - r) * T) / (S * sig * sqrt(T));
}

double Option::CallDelta(double h) const
{
	return (Call(h) - Call(-h)) / (2 * h);
}

double Option::PutDelta(double h) const
{
	return (Put(h) - Put(-h)) / (2 * h);
}

double Option::Gamma(double h) const
{
	return (Call(h) + Call(-h) - 2 * Call()) / (h * h);
}