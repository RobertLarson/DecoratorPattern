/*
 * Ham.cpp
 *
 *  Created on: Feb 18, 2017
 *      Author: Robert Larson
 */

#include "Ham.h"

Ham::Ham(Sub * sub)
: SubItemsDecorator(sub) {

}

Ham::~Ham() {
}

double Ham::GetCost()
{
	return m_pSub->GetCost() + 0.50;
}

std::string Ham::GetDescription()
{
	return m_pSub->GetDescription() + ", Ham";
}
