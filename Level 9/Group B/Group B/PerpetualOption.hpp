//
//  Option.hpp
//  C++ Certificate
//  Header file for the PerpetualOption class.
//
//  Created by NELSON YEUNG on 29/5/2019.
//  Copyright © 2019 Nelson Yeung. All rights reserved.
//
#ifndef PerpetualOption_HPP
#define PerpetualOption_HPP

class PerpetualOption
{
private:
	double K;
	double sig;
	double r;
	double S;
	double b;
public:
	PerpetualOption(); // default constructor
	~PerpetualOption(); // destructor
	PerpetualOption(double strike, double vol, double risk_free, double spot, double cost);

	double Call() const;
	double Put() const;
};

#endif