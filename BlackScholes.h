/*
 * BlackScholes.h
 *
 *  Created on: Dec 29, 2015
 *      Author: karim
 */

#ifndef BLACKSCHOLES_H_
#define BLACKSCHOLES_H_

//#include <ostream>
#include <iostream>
#include <string>
#include "math.h"

class BlackScholes{

public:
	double S;
	double K;
	double r;
	double sigma;
	double T;
	double t;

public:
	BlackScholes();
	virtual ~BlackScholes();

public:
	/*Methode statique qui calcule l'integrale*/
	static double integrale(double(*f)(double x), double a, double b);
//	static double integrale(double(*f)(double x), double a, double b, int n);

	/*Methode statique qui calcule la densiter de la loi gaussiene d'une variable donner en parametre*/
	static double fonction_densite_normale(double x);
	/*Methode statique qui calcule la valeur de la fonction de reprtition d'une variable donner en parametre*/
	static double N(double x);
	/*Methode qui calcule la valeur de d1 qui est mentioner dans le rapport*/
	double d1()const;
	/*Methode qui calcule la valeur de d2 qui est mentioner dans le rapport*/
	double d2()const;
	/*Methode virtuelle*/
	virtual void print()=0;

};


#endif /* BLACKSCHOLES_H_ */
