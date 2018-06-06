/*
 * Test.cpp
 *
 *  Created on: Dec 29, 2015
 *      Author: karim
 */

#include "PutOption.h"
#include "CallOption.h"
#include "EquationChaleur.h"

int main(){
	try
	{
		PutOption p;
		CallOption c(300, 100,0.001,0.3,1,0);
		EquationChaleur e1;
		EquationChaleur e(e1);

		p.print();
		c.print();
		e.print();

	}
	catch(const char *str){
		std::cout<<str<<std::endl;
	}
}

