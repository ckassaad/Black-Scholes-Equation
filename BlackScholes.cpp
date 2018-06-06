/*
 * BlackScholes.cpp
 *
 *  Created on: Dec 29, 2015
 *      Author: karim
 */

#include "BlackScholes.h"

BlackScholes::BlackScholes() {
	// TODO Auto-generated constructor stub

}

BlackScholes::~BlackScholes() {
	// TODO Auto-generated destructor stub
}


double BlackScholes::integrale(double (*f)(double x), double a, double b){
	/* @require une fonction f qui depend d'une variable x, et un intervalle [a,b]
	* @ensures */
	double step;
	double area=0.0;
	int i, n=10000000;
	step=(b-a)/n;
	for(i=0; i<=n-1; i++){
    		area=area+f(a);
    		a=a+step;
	}
	return area*step;
}

/*double BlackScholes::integrale(double(*f)(double x), double a, double b, int n) {
    double step = (b - a) / n;
    double area = 0.0;
    for (int i = 0; i < n; i ++) {
        area += f(a + (i + 0.5) * step) * step; // sum up each small rectangle
    }
    return area;
}*/

double BlackScholes::fonction_densite_normale(double x){
	double d_gauss=(1/(sqrt(2*M_PI)))*exp((x*x)/(-2));
	return d_gauss;
}

double BlackScholes::N(double x){
	double f_gauss;
	f_gauss=BlackScholes::integrale(fonction_densite_normale,-20000,x);
	return f_gauss;
}

double BlackScholes::d1()const{
	return (log(S/K)+(r+pow(sigma,2)/2)*(T-t))/(sigma*sqrt(T-t));
}

double BlackScholes::d2()const{
	return (log(S/K)+(r-pow(sigma,2)/2)*(T-t))/(sigma*sqrt(T-t));
}



