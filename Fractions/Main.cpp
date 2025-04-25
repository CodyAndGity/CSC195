

#include <iostream>
#include "Fraction.h"
#include <map>


int main(){
	std::cout << "Unsigned Fraction testing" << std::endl;
	mathlib::unsignedFraction fractionOne(5, 25);
	mathlib::unsignedFraction fractionTwo(5, 25);
	mathlib::unsignedFraction fractionThree = fractionOne + fractionTwo;
	std::cout <<fractionOne<<" + "<<fractionTwo<<" = "<< fractionThree << std::endl;
	std::cout << fractionThree<<" = "<<fractionThree.simplify() << std::endl;
	std::cout << fractionThree<<" = "<<fractionThree.toFloat() << std::endl;
	mathlib::unsignedFraction fractionFour(20, 25);
	mathlib::unsignedFraction fractionFive = fractionOne + fractionFour;
	std::cout << fractionOne << " + " << fractionFour << " = " << fractionFive << std::endl;
	std::cout << fractionFive << " = " << fractionFive.simplify() << std::endl;


	
	std::cout << "Signed Fraction testing" << std::endl;
	
	std::cout << "+- Fraction testing" << std::endl;

	mathlib::Fraction<int> fraction1(-4, 25);
	mathlib::Fraction<int> fraction2(-1, 25);
	mathlib::Fraction<int> fraction3= fraction1 + fraction2;
	std::cout <<fraction1<<" + "<<fraction2<<" = " << fraction3 << std::endl;
	std::cout << fraction3<<" = " << fraction3.simplify() << std::endl;

	mathlib::signedFraction fraction4(5, 25);
	mathlib::signedFraction fraction5(5, 25);
	mathlib::signedFraction fraction6 = fraction4 - fraction5;
	std::cout <<fraction4<<" - "<<fraction5<<" = " << fraction6 << std::endl;
	std::cout <<fraction6<<" = " << fraction6.simplify() << std::endl;
	
	std::cout << "*/ Fraction testing" << std::endl;

	mathlib::signedFraction fraction7(1 , 4);
	mathlib::signedFraction fraction8(1, 3);
	mathlib::signedFraction fraction9=fraction7*fraction8;
	mathlib::signedFraction fraction10=fraction7/fraction8;
	std::cout << fraction7<<" * "<< fraction8<<" = "<< fraction9 << std::endl;
	std::cout << fraction9<<" = "<<fraction9.simplify() << std::endl;

	std::cout << fraction7 << " / " << fraction8 << " = " << fraction10 << std::endl;
	std::cout << fraction10 << " = " << fraction10.simplify() << std::endl;
	
	std::cout << "comparison Fraction testing" << std::endl;

	std::map<bool, std::string> mapBoolToString = { {0,"False"},{1,"True"} };
	//to make it easier to read the output
	bool test0 = fraction9 == fraction10;
	std::cout << fraction9<<" == "<< fraction10<<" is "<< mapBoolToString[test0] << std::endl;

	bool test1 = fraction9 == fraction9;
	std::cout << fraction9 << " == " << fraction9 << " is " << mapBoolToString[test1] << std::endl;
	
	bool test2 = fraction9 != fraction9;
	std::cout << fraction9 << " != " << fraction9 << " is " << mapBoolToString[test2] << std::endl;


	bool test3 = fraction9 > fraction10;
	std::cout << fraction9 << " > " << fraction10 << " is " << mapBoolToString[test3] << std::endl;

	bool test4 = fraction9 < fraction10;
	std::cout << fraction9 << " < " << fraction10 << " is " << mapBoolToString[test4] << std::endl;
	
	bool test5 = fraction9 <= fraction10;
	std::cout << fraction9 << " <= " << fraction10 << " is " << mapBoolToString[test5] << std::endl;
	
	bool test6 = fraction9 >= fraction10;
	std::cout << fraction9 << " >= " << fraction10 << " is " << mapBoolToString[test6] << std::endl;

	bool test7 = fraction9 <= fraction9;
	std::cout << fraction9 << " <= " << fraction9 << " is " << mapBoolToString[test7] << std::endl;
	std::cout << "Enter a fraction in the form of numerator, then denominator" << std::endl;
	std::cin >> fraction7;
	std::cout <<"Here is your fraction "<< fraction7 << std::endl;
	if (fraction7 != fraction7.simplify()) {
		std::cout << "Here is the simplified version " << fraction7.simplify() << std::endl;
	}
	else {
		std::cout << "This fraction cannot be simpified further" << std::endl;
	}
	std::cout <<"Here is the float value : " << fraction7.toFloat() << std::endl;

	//NO FLOAT FRACTIONS
	/*mathlib::floatFraction fraction4(5.5f, 25.5f);
	mathlib::floatFraction fraction5(5.5f, 25.5f);
	mathlib::floatFraction fraction6 = fraction4 + fraction5;
	std::cout << fraction6 << std::endl;
	std::cout << fraction6.simplify() << std::endl;*/
	//std::cout << "end";
}


