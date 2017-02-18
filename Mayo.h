/*
 * Mayo.h
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#ifndef MAYO_H_
#define MAYO_H_

#include "SubItemsDecorator.h"

class Mayo : public SubItemsDecorator {
public:
	Mayo(Sub * sub);
	virtual ~Mayo();

	virtual double GetCost();
	virtual std::string GetDescription();

private:
	Sub * m_pSub;
};

#endif /* MAYO_H_ */
