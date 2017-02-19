/*
 * SmallSub.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "SmallSub.h"

SmallSub::SmallSub() {

}

SmallSub::~SmallSub() {
}

double SmallSub::GetCost()
{
	return 5.99;
}

std::string SmallSub::GetDescription()
{
   return std::string("Small Sub");
}
