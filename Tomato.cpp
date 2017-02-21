/*
 * Tomato.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "Tomato.h"

Tomato::Tomato(Sub * sub)
: SubItemsDecorator(sub) {

}

Tomato::~Tomato() {
}

std::string Tomato::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Tomato");
}
