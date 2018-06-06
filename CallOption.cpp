/*
 * CallOption.cpp
 *
 *  Created on: Dec 29, 2015
 *      Author: karim
 */

#include "CallOption.h"

CallOption::CallOption() {
	S=300;
	K=100;
	r=0.001;
	sigma=0.3;
	T=1;
	t=0;
}

CallOption::CallOption(double S1, double K1,double r1,double sigma1,double T1,double t1) {

	S=S1;
	K=K1;
	r=r1;
	sigma=sigma1;
	T=T1;
	t=t1;
}

CallOption::CallOption(const CallOption & c){
	S=c.S;
	K=c.K;
	r=c.r;
	sigma=c.sigma;
	T=c.T;
	t=c.t;
}

CallOption::~CallOption() {
	// TODO Auto-generated destructor stub
}

std::string CallOption::optionType() {
	return "Call";
}

double CallOption::price()const{
	double d1,d2,C;
	//d1=(log(S/K)+(r+pow(sigma,2)/2)*(T-t))/(sigma*sqrt(T-t));
	//d2=(log(S/K)+(r-pow(sigma,2)/2)*(T-t))/(sigma*sqrt(T-t));
	d1=Payoff::BlackScholes::d1();
	d2=Payoff::BlackScholes::d2();
	C=S*N(d1)-K*exp(-r*(T-t))*N(d2);

	return C;
}

