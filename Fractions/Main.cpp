

#include <iostream>
#include "Fraction.h"
int main(){
	mathlib::Fraction<int> fraction1(2, 2);
	mathlib::Fraction<int> fraction2(3, 2);
	mathlib::Fraction<int> fraction3= fraction1 + fraction2;
	
	std::cout << fraction3.simplify() << std::endl;
}


