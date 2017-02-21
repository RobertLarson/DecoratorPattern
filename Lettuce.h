/*
 * Lettuce.h
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#ifndef LETTUCE_H_
#define LETTUCE_H_

#include "SubItemsDecorator.h"

class Lettuce : public SubItemsDecorator {
public:
	Lettuce(Sub * sub);
	virtual ~Lettuce();

	virtual std::string GetDescription();
};

#endif /* LETTUCE_H_ */
