/*
 * SubItemsDecorator.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "SubItemsDecorator.h"

SubItemsDecorator::SubItemsDecorator(Sub * sub)
: m_pSub(sub)
{
}

SubItemsDecorator::~SubItemsDecorator()
{
}

double SubItemsDecorator::GetCost(){
	return m_pSub->GetCost();
}

std::string SubItemsDecorator::GetDescription()
{
	return m_pSub->GetDescription();
}
