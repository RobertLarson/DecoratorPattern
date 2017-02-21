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
	SubItemsDecorator(Sub * sub);
	virtual ~SubItemsDecorator();

	virtual double GetCost();
	virtual std::string GetDescription();

protected:
	Sub * m_pSub;
};

#endif /* SUBITEMSDECORATOR_H_ */
