/*
 * LargeSub.h
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#ifndef LARGESUB_H_
#define LARGESUB_H_

#include "Sub.h"

class LargeSub : public Sub {
public:
	LargeSub();
	virtual ~LargeSub();

	virtual double GetCost();
	virtual std::string GetDescription();

};

#endif /* LARGESUB_H_ */
