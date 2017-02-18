/*
 * Lettuce.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "Lettuce.h"

Lettuce::Lettuce(Sub * sub)
: m_pSub(sub) {

}

Lettuce::~Lettuce() {
}

double Lettuce::GetCost()
{
	return m_pSub->GetCost() + 0.00;
}

std::string Lettuce::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Lettuce");
}
