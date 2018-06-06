/*
 * EquationChaleur.cpp
 *
 *  Created on: Dec 30, 2015
 *      Author: karim
 */

#include "EquationChaleur.h"

EquationChaleur::EquationChaleur() {
	S=300;
	K=100;
	r=0.001;
	sigma=0.3;
	T=1;
	t=0;
}
EquationChaleur::EquationChaleur(double S1, double K1,double r1,double sigma1,double T1,double t1) {
	S=S1;
	K=K1;
	r=r1;
	sigma=sigma1;
	T=T1;
	t=t1;
}
EquationChaleur::EquationChaleur(const EquationChaleur & e) {
	S=e.S;
	K=e.K;
	r=e.r;
	sigma=e.sigma;
	T=e.T;
	t=e.t;
}
EquationChaleur::~EquationChaleur() {
	// TODO Auto-generated destructor stub
}


double EquationChaleur::resultat()const{
	double d1,d2,x,tau,res;
	d1=BlackScholes::d1();
	d2=BlackScholes::d2();
	x=log(S/K);
	tau=(pow(sigma,2)*(T-t))/2;
	res=exp(((K+1)*x/2)+pow(K+1,2)*tau/4)*N(d1)-exp(((K+1)*x/2)+pow(K+1,2)*tau/4)*N(d2);
	return res;
}

void EquationChaleur::print(){
	std::cout<<"Pour S="<<S<<", K="<<K<<", r="<<r<<", sigma="<<sigma<<", T="<<T<<" et t="<<t<<" le resulat de l'equation de chaleur est "<<resultat()<<std::endl;
}

