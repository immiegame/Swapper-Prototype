#include "BaseSwapper.h"
#include <iostream>


BaseSwapper::BaseSwapper() {
	waga = 1.5f;
	bobo = 1.2f;
}

void BaseSwapper::OnSwap() {}

void BaseSwapper::Test()
{
	std::cout << waga << std::endl;
	std::cout << bobo << std::endl;
	std::cout << "" << std::endl;
}
