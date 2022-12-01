/*
 * Activo.h
 *
 *  Created on: 29 nov. 2022
 *      Author: Usuario
 */

#ifndef ACTIVO_H_
#define ACTIVO_H_

#include <iostream>
using namespace std;
#include "Estado.h"

class Activo : public Estado{
	void DoSomething() { cout << "acciones de estado activo" << endl; }
public:
	Activo();
	virtual ~Activo();
};

#endif /* ACTIVO_H_ */
