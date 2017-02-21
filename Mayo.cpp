/*
 * Mayo.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "Mayo.h"

Mayo::Mayo(Sub * sub)
: SubItemsDecorator(sub) {

}

Mayo::~Mayo() {
}

std::string Mayo::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Mayo");
}
