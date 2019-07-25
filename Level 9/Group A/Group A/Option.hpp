//
//  Option.hpp
//  C++ Certificate
//  Header file for the Option class.
//
//  Created by NELSON YEUNG on 29/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//
#ifndef Option_HPP
#define Option_HPP

class Option
{
private:
	double T;
	double K;
	double sig;
	double r;
	double S;
	double b;
public:
	Option(); // default constructor
	// Shape(const Shape& shape);	// copy constructor
	~Option(); // destructor
	Option(double time, double strike, double vol, double risk_free, double spot, double cost);

	double Call() const;
	double Call(double h) const;
	double Put() const;
	double Put(double h) const;

	double CallDelta() const;
	double PutDelta() const;
	double Gamma() const;
	double CallDelta(double h) const;
	double PutDelta(double h) const;
	double Gamma(double h) const;
};

#endif