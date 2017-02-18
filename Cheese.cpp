/*
 * Cheese.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "Cheese.h"

Cheese::Cheese(Sub * sub)
: m_pSub(sub) {

}

Cheese::~Cheese() {
}

double Cheese::GetCost()
{
	return m_pSub->GetCost() + 0.50;
}

std::string Cheese::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Cheese");
}
