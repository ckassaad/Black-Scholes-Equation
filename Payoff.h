/*
 * Payoff.h
 *
 *  Created on: Dec 31, 2015
 *      Author: karim
 */

#ifndef PAYOFF_H_
#define PAYOFF_H_

#include "BlackScholes.h"

class Payoff: public BlackScholes{
public:
	Payoff();
	virtual ~Payoff();

public:
	/*Methode virtuelle*/
	virtual std::string optionType()=0;
	/*Methode virtuelle*/
	virtual double price()const=0;
	/*Methode heriter qui affiche le resultat de la methode price()*/
	void print();
};

#endif /* PAYOFF_H_ */
