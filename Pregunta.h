/*
 * Pregunta.h
 *
 *  Created on: 29 nov. 2022
 *      Author: Usuario
 */

#ifndef PREGUNTA_H_
#define PREGUNTA_H_

#include <vector>

#include "Estado.h"
#include "Activo.h"
#include "Inactivo.h"

#include "Fecha.h"


class Pregunta {
private:
	static int preguntasCreadas;
	int id_pregunta;
	string titulo;
	string descripcion;
	Fecha fechaPublicacion;
	vector <string> tags;

	Estado *estadoActual;
	Activo estadoActivo;
	Inactivo estadoInactivo;
public:
	Pregunta(string titulo,string descripcion,Fecha fechaPublicacion,vector <string> tags);
	virtual ~Pregunta();
	void DoSomething();
	void CamiarEstado( const std::string & nuevoEstado );
	void MostrarPregunta();

	//getters
	int GetIdPregunta(){return this->id_pregunta;}
	string GetTituto(){return this->titulo;}
	string GetDescripcion(){return this->descripcion;}
	Fecha GetFechaPublicacion(){return this->fechaPublicacion;}
	void MostrarTags();
};

#endif /* PREGUNTA_H_ */
