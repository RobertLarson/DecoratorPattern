/*
 * SubItemsDecorator.h
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#ifndef SUBITEMSDECORATOR_H_
#define SUBITEMSDECORATOR_H_

#include "Sub.h"

class SubItemsDecorator : public Sub {
public:
	virtual ~SubItemsDecorator() {}

	virtual double GetCost() = 0;
	virtual std::string GetDescription() = 0;
};

#endif /* SUBITEMSDECORATOR_H_ */
