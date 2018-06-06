/*
 * EquationChaleur.h
 *
 *  Created on: Dec 30, 2015
 *      Author: karim
 */

#ifndef EQUATIONCHALEUR_H_
#define EQUATIONCHALEUR_H_

#include "BlackScholes.h"

class EquationChaleur: public BlackScholes {
public:
	EquationChaleur();
	EquationChaleur(double S1, double K1,double r1,double sigma1,double T1,double t1);
	EquationChaleur(const EquationChaleur &);
	virtual ~EquationChaleur();

public:
	/*methode qui calcule la solution de l'equation de chaleur*/
	double resultat()const;
	/*Methode heriter qui affiche le resultat de la methode resultat()*/
	void print();
};

#endif /* EQUATIONCHALEUR_H_ */
