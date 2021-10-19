#pragma once

#include "../BaseSwapper.h"

class SwapperA : public BaseSwapper {
	

public:
	inline virtual void OnSwap() {
		waga = 2.2f;
		bobo = 2.0f;
	}

	float baba;

	inline SwapperA() {
		baba = 0.0f;
	}
};