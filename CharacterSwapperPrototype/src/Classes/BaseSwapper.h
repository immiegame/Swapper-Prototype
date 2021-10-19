#pragma once

class BaseSwapper {
	

public:
	BaseSwapper();

	virtual void OnSwap();

	virtual void Test();

	template<class T>
	static inline void ReplaceWith(T Class, BaseSwapper* SwapperObj) {
		BaseSwapper SwapHandler = *SwapperObj;
		SwapperObj = new(SwapperObj) T();
		SetValues(SwapperObj, SwapHandler);
	}

	static inline void SetValues(BaseSwapper* SwapperObj, BaseSwapper SwapperVal) {
		SwapperObj->bobo = SwapperVal.bobo;
	}

	float waga;
	float bobo;

};
