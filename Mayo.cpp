/*
 * Mayo.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "Mayo.h"

Mayo::Mayo(Sub * sub)
: m_pSub(sub) {

}

Mayo::~Mayo() {
}

double Mayo::GetCost()
{
	return m_pSub->GetCost() + 0.00;
}

std::string Mayo::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Mayo");
}
