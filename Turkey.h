/*
 * Turkey.h
 *
 *  Created on: Feb 18, 2017
 *      Author: Robert Larson
 */

#ifndef TURKEY_H_
#define TURKEY_H_

#include "SubItemsDecorator.h"

class Turkey : public SubItemsDecorator {
public:
	Turkey(Sub * sub);
	virtual ~Turkey();

	virtual double GetCost();
	virtual std::string GetDescription();

private:
	Sub * m_pSub;
};

#endif /* TURKEY_H_ */
