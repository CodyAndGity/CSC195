#include "TinyTARDIS.h"
#include <iostream>
void TinyTARDIS::searchForTimeLord() {
	std::cout << "Searching for a Time Lord..." << std::endl;
	std::cout << "No Time Lord found... " << std::endl;
	std::cout << "Current Time Lord: " << currentTimeLord << std::endl;
}
void TinyTARDIS::timeTravel(float year) {
	currentYear = year; // Set the current year to the new year
	std::cout << "Time traveling to the year " << currentYear << "..." << std::endl;
	std::cout << "Arrived in the year " << currentYear << std::endl;
}