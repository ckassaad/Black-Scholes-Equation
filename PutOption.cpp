/*
 * PutOption.cpp
 *
 *  Created on: Dec 29, 2015
 *      Author: karim
 */

#include "PutOption.h"

PutOption::PutOption() {
	S=300;
	K=100;
	r=0.001;
	sigma=0.3;
	T=1;
	t=0;
}
PutOption::PutOption(double S1, double K1,double r1,double sigma1,double T1,double t1) {

	S=S1;
	K=K1;
	r=r1;
	sigma=sigma1;
	T=T1;
	t=t1;
}
PutOption::PutOption(const PutOption & p){
	S=p.S;
	K=p.K;
	r=p.r;
	sigma=p.sigma;
	T=p.T;
	t=p.t;
}
PutOption::~PutOption() {
	// TODO Auto-generated destructor stub
}

std::string PutOption::optionType(){
	return "Put";
}

double PutOption::price() const{
	double d1,d2,P;
//	d1=(log(S/K)+(r+pow(sigma,2)/2)*(T-t))/(sigma*sqrt(T-t));
//	d2=(log(S/K)+(r-pow(sigma,2)/2)*(T-t))/(sigma*sqrt(T-t));
	d1=BlackScholes::d1();
	d2=BlackScholes::d2();
	P=K*exp(-r*(T-t))*N(-d2)-S*N(-d1);

	return P;
}
