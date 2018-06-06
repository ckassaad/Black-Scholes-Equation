/*
 * PutOption.h
 *
 *  Created on: Dec 29, 2015
 *      Author: karim
 */

#ifndef PUTOPTION_H_
#define PUTOPTION_H_

#include "Payoff.h"

class PutOption: public Payoff {
public:
	PutOption();
	PutOption(double S, double K,double r,double sigma,double T,double t);
	PutOption(const PutOption &);
	virtual ~PutOption();

public:
	/*Methode heriter qui donne le type au payoff*/
	std::string optionType();
	/*Methode heriter qui calcule le prix du put*/
	double price() const;


};

#endif /* PUTOPTION_H_ */
