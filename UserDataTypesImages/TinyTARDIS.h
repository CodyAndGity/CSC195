#pragma once
#include <iostream>
#include <string>
class TinyTARDIS {
public:
	void searchForTimeLord();
	void timeTravel(float year);

private:
	const std::string currentTimeLord = "No one"; // Default value
	float currentYear = 2023.0f;
	const std::string color = "TARDIS Blue";
	int mass = 1000000;
};