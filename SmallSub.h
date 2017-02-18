/*
 * SmallSub.h
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#ifndef SMALLSUB_H_
#define SMALLSUB_H_

#include "Sub.h"

class SmallSub : public Sub {
public:
	SmallSub();
	virtual ~SmallSub();

	virtual double GetCost();
	virtual std::string GetDescription();
};

#endif /* SMALLSUB_H_ */
