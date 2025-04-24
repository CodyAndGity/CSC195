

#include <iostream>
#include "Fraction.h"

int main(){
	mathlib::unsignedFraction fractionOne(5, 25);
	mathlib::unsignedFraction fractionTwo(5, 25);
	mathlib::unsignedFraction fractionThree = fractionOne + fractionTwo;
	std::cout << fractionThree << std::endl;
	std::cout << fractionThree.simplify() << std::endl;
	
	mathlib::Fraction<int> fraction1(-4, 25);
	mathlib::Fraction<int> fraction2(-1, 25);
	mathlib::Fraction<int> fraction3= fraction1 + fraction2;
	std::cout << fraction3 << std::endl;
	std::cout << fraction3.simplify() << std::endl;

	mathlib::signedFraction fraction4(5, 25);
	mathlib::signedFraction fraction5(5, 25);
	mathlib::signedFraction fraction6 = fraction4 - fraction5;
	std::cout << fraction6 << std::endl;
	std::cout << fraction6.simplify() << std::endl;

	/*mathlib::floatFraction fraction4(5.5f, 25.5f);
	mathlib::floatFraction fraction5(5.5f, 25.5f);
	mathlib::floatFraction fraction6 = fraction4 + fraction5;
	std::cout << fraction6 << std::endl;
	std::cout << fraction6.simplify() << std::endl;*/
	//std::cout << "end";
}


