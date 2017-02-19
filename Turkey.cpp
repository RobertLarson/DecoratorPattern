/*
 * Turkey.cpp
 *
 *  Created on: Feb 18, 2017
 *      Author: Robert Larson
 */

#include "Turkey.h"

Turkey::Turkey(Sub * sub)
: m_pSub(sub) {

}

Turkey::~Turkey() {
}

double Turkey::GetCost()
{
   return m_pSub->GetCost() + 0.00;
}

std::string Turkey::GetDescription()
{
   return m_pSub->GetDescription() + ", Turkey";
}
