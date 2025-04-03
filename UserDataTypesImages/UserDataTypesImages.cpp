
#include <iostream>
#include "Scrongler.h"
#include "TinyTARDIS.h" 

int main()
{
	Scrongler scrongler; // Create an instance of Scrongler
	scrongler.determineWielder("Silvers"); // Test with a valid name
	scrongler.inflictTerror(); // Call the inflictTerror method
	scrongler.determineWielder("Bob"); // Test with an invalid name
	scrongler.attack(); // Call the attack method

	TinyTARDIS tinyTARDIS; // Create an instance of TinyTARDIS
	tinyTARDIS.searchForTimeLord(); // Call the searchForTimeLord method
	tinyTARDIS.timeTravel(2050.0f); // Call the timeTravel method to travel to the year 2050
	tinyTARDIS.timeTravel(-12.40f);
	
}


