/*
 * Pregunta.cpp
 *
 *  Created on: 29 nov. 2022
 *      Author: Usuario
 */

#include "Pregunta.h"

int Pregunta::preguntasCreadas = 0;
Pregunta::Pregunta(string titulo,string descripcion,Fecha fechaPublicacion,vector<string>tags) : estadoActual(&estadoActivo) {
	this->id_pregunta = preguntasCreadas++;
	this->titulo = titulo;
	this->descripcion = descripcion;
	this->fechaPublicacion = fechaPublicacion;
	this->tags = tags;
}

Pregunta::~Pregunta() {
	// TODO Auto-generated destructor stub
}

void Pregunta::DoSomething()
{
	estadoActual->Action();
}

void Pregunta::CamiarEstado( const string & nuevoEstado )
{
	if ( nuevoEstado == "inactivo" )
		estadoActual = &estadoInactivo;
	else
		estadoActual = &estadoActivo;
}

void Pregunta::MostrarTags()
{
	for(int i=0;i<3;i++)
	{
		cout<<tags[i]<<",";
	}
	cout<<endl;
}


void Pregunta::MostrarPregunta(){
	cout<<"-----Pregunta------"<<endl;
	cout<<"id: "<<this->GetIdPregunta()<<endl;
	cout<<"Fecha de publicacion: "<<this->GetFechaPublicacion()<<endl;
	cout<<"Titulo: "<<this->GetTituto()<<endl;
	cout<<"Descripcion:"<<this->GetDescripcion()<<endl;
	cout<<"etiquetas: ";
	this->MostrarTags();
	cout<<"-------------"<<endl;
}


