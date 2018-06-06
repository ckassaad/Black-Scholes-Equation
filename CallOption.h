/*
 * CallOption.h
 *
 *  Created on: Dec 29, 2015
 *      Author: karim
 */

#ifndef CALLOPTION_H_
#define CALLOPTION_H_

#include "Payoff.h"

class CallOption: public Payoff {
public:
	CallOption();
	CallOption(double S, double K,double r,double sigma,double T,double t);
	CallOption(const CallOption &);
	virtual ~CallOption();

public:
	/*Methode heriter qui donne le type au payoff*/
	std::string optionType();
	/*Methode heriter qui calcule le prix du call*/
	double price()const;

};

#endif /* CALLOPTION_H_ */
