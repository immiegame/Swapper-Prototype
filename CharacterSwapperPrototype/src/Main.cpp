#include "Classes/BaseSwapper.h"
#include "Classes/Swappers/SwapperA.h"
#include "Classes/Swappers/SwapperB.h"
#include <iostream>

int main() {

	/*
	Here we instantiate a new object of some subclass of our primary class.
	From there we run the test function to log it's values.
	*/
	BaseSwapper* testSwapper = new SwapperA();
	testSwapper->Test();

	/*
	Next we call the OnSwap() function.
	Since we instantiated the object with the class of SwapperA,
	it will call the SwapperA definition of that function.
	*/
	testSwapper->OnSwap();
	testSwapper->Test();

	/*
	Then we make another pointer to that object. 
	This is used to see if the swapping process properly maintains memory location.
	*/
	BaseSwapper* ref = testSwapper;
	ref->Test();

	/*
	We replace the object with the class of another.
	Looking at the definition of the static function ReplaceWith(),
	we can see that it makes a new object at the original memory address.
	Thus this functions calls ANOTHER function to set any necessary variables to maintain the previous state.
	*/
	BaseSwapper::ReplaceWith(SwapperB(), testSwapper);

	/*
	We then call OnSwap() for the same object of a different subclass.
	We call Test() to see the values.
	*/
	testSwapper->OnSwap();
	testSwapper->Test();

	/*
	Lastly, we use the reference from earlier to validate the process.
	*/
	ref->Test();

	/*
	We are able to see that yes, 
	we were able to replace the object with another while maintaining it's location in memory.
	*/
	std::cin.get();

}






