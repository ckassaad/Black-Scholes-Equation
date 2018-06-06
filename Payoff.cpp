/*
 * Payoff.cpp
 *
 *  Created on: Dec 31, 2015
 *      Author: karim
 */

#include "Payoff.h"

Payoff::Payoff() {
	// TODO Auto-generated constructor stub

}

Payoff::~Payoff() {
	// TODO Auto-generated destructor stub
}

void Payoff::print(){
	std::cout<<"Pour S="<<S<<", K="<<K<<", r="<<r<<", sigma="<<sigma<<", T="<<T<<" et t="<<t<<" la valeur du "<<optionType()<<" est "<<price()<<std::endl;
}

