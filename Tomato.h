/*
 * Tomato.h
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#ifndef TOMATO_H_
#define TOMATO_H_

#include "SubItemsDecorator.h"

class Tomato : public SubItemsDecorator {
public:
	Tomato(Sub * sub);
	virtual ~Tomato();

	virtual std::string GetDescription();
};

#endif /* TOMATO_H_ */
