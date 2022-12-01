/*
 * Estado.h
 *
 *  Created on: 29 nov. 2022
 *      Author: Usuario
 */

#ifndef ESTADO_H_
#define ESTADO_H_

class Estado {
	virtual void DoSomething() = 0 ;
public:
	Estado();
	virtual ~Estado();
	void Action() { DoSomething(); }
};

#endif /* ESTADO_H_ */
