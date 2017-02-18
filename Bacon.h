/*
 * Bacon.h
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#ifndef BACON_H_
#define BACON_H_

#include "SubItemsDecorator.h"

class Bacon : public SubItemsDecorator {
public:
	Bacon(Sub * sub);
	virtual ~Bacon();

	virtual double GetCost();
	virtual std::string GetDescription();
private:
	Sub * m_pSub;
};

#endif /* BACON_H_ */
