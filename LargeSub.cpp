/*
 * LargeSub.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "LargeSub.h"

LargeSub::LargeSub() {

}

LargeSub::~LargeSub() {
}

double LargeSub::GetCost()
{
	return 8.99;
}


std::string LargeSub::GetDescription()
{
   return std::string("Large Sub");
}
