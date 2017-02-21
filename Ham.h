/*
 * Ham.h
 *
 *  Created on: Feb 18, 2017
 *      Author: Robert Larson
 */

#ifndef HAM_H_
#define HAM_H_

#include "SubItemsDecorator.h"

class Ham : public SubItemsDecorator {
public:
	Ham(Sub * sub);
	virtual ~Ham();

	virtual double GetCost();
	virtual std::string GetDescription();
};

#endif /* HAM_H_ */
