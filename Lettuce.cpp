/*
 * Lettuce.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "Lettuce.h"

Lettuce::Lettuce(Sub * sub)
: SubItemsDecorator(sub) {

}

Lettuce::~Lettuce() {
}

std::string Lettuce::GetDescription()
{
	return m_pSub->GetDescription() + std::string(", Lettuce");
}
