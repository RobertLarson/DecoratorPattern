/*
 * Turkey.cpp
 *
 *  Created on: Feb 18, 2017
 *      Author: Robert Larson
 */

#include "Turkey.h"

Turkey::Turkey(Sub * sub)
: SubItemsDecorator(sub) {

}

Turkey::~Turkey() {
}


std::string Turkey::GetDescription()
{
   return m_pSub->GetDescription() + ", Turkey";
}
