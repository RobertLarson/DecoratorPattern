/*
 * Tomato.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "Tomato.h"

Tomato::Tomato(Sub * sub)
: m_pSub(sub) {

}

Tomato::~Tomato() {
}

double Tomato::GetCost()
{
	return m_pSub->GetCost() + 0.00;
}

std::string Tomato::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Tomato");
}
