/*
 * Cheese.h
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#ifndef CHEESE_H_
#define CHEESE_H_

#include "SubItemsDecorator.h"

class Cheese : public SubItemsDecorator {
public:
	Cheese(Sub * sub);
	virtual ~Cheese();

	virtual double GetCost();
	virtual std::string GetDescription();
};

#endif /* CHEESE_H_ */
