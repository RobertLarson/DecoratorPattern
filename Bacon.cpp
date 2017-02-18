/*
 * Bacon.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "Bacon.h"

Bacon::Bacon(Sub * sub)
: m_pSub(sub) {

}

Bacon::~Bacon() {
}

double Bacon::GetCost()
{
	return m_pSub->GetCost() + 1.00;
}

std::string Bacon::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Bacon");
}
