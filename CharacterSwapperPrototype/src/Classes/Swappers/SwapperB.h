#pragma once

#include "../BaseSwapper.h"

class SwapperB : public BaseSwapper {

public:
	inline virtual void OnSwap() {
		waga = 3.3f;
	}
};