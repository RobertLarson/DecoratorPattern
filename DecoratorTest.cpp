/*
 * DecoratorTest.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: Robert Larson
 */

#include "SmallSub.h"
#include "LargeSub.h"
#include "Lettuce.h"
#include "Tomato.h"
#include "Bacon.h"
#include "Cheese.h"
#include "Mayo.h"

#include <iostream>

int main()
{
	SmallSub smallSub;
	Lettuce  smallLettuce(&smallSub);
	Tomato   smallTomato(&smallLettuce);
	Bacon    smallBacon(&smallTomato);
	Cheese   smallCheese(&smallBacon);
	Mayo     smallMayo(&smallCheese);

    Sub * sub1 = &smallMayo;

	std::cout << "Description : " << sub1->GetDescription() << "\n";
	std::cout << "Cost        : " << sub1->GetCost() << "\n\n";


	LargeSub largeSub;
	Lettuce  largeLettuce(&largeSub);
	Tomato   largeTomato(&largeLettuce);
	Bacon    largeBacon(&largeTomato);
	Cheese   largeCheese(&largeBacon);
	Mayo     largeMayo(&largeCheese);

	Sub * sub2 = &largeMayo;

	std::cout << "Description : " << sub2->GetDescription() << "\n";
	std::cout << "Cost        : " << sub2->GetCost() << "\n\n";

	return 0;
}

