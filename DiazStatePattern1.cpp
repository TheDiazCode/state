//============================================================================
// Name        : DiazStatePattern1.cpp
// Author      : Exequiel Diaz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <vector>

#include "Pregunta.h"
#include "Fecha.h"

int main() {
	Fecha f0(10,8,2021);
	vector <string> v1={"programacion","c++","vectores"};
	vector <string> v2={"golang","go routines","backend"};
	vector <string> v3={"python","inteligencia artificial","machine learning"};
	vector <string> v4={"c#","c sharp","mvc"};

	Pregunta p("como recorrer un array de punteros","tengo este problema...",f0,v1);

	p.DoSomething();
	p.CamiarEstado("inactivo");
	p.DoSomething();
	p.CamiarEstado("activo");
	p.DoSomething();

	p.MostrarPregunta();


	return 0;
}
