/*
 * Inactivo.h
 *
 *  Created on: 29 nov. 2022
 *      Author: Usuario
 */

#ifndef INACTIVO_H_
#define INACTIVO_H_

#include <iostream>
using namespace std;
#include "Estado.h"

class Inactivo : public Estado {
	void DoSomething() { cout << "acciones de esado inactivo" << endl; }
public:
	Inactivo();
	virtual ~Inactivo();
};

#endif /* INACTIVO_H_ */
