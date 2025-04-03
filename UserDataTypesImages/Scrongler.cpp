#include "Scrongler.h"
#include <iostream>
void Scrongler::inflictTerror() {
	std::cout << "The Scrongler inflicts terror upon all who gaze upon it!, " << terrorLevel <<" times!" << std::endl;
}
void Scrongler::determineWielder(std::string potentialWielder) {
	char validLetters[] = { 'm','M','s','S','l','L' }; // Valid letters for a potential weilder
	bool isValid = false; // Flag to check if the potential weilder has valid letters
	for (short i = 0; i < potentialWielder.length(); i++) {
		for (short validLetter = 0; validLetter < 6; validLetter++) {
			if (potentialWielder[i] == validLetters[validLetter]) {
				isValid = true; // Found a valid letter in the potential weilder's name
			}
		}
		
	}
	if (isValid) {
		wielderName = potentialWielder;
		std::cout << "The Scrongler has chosen " << wielderName << " as its new wielder!" << std::endl;
	}
	else {
		std::cout << potentialWielder << " is not worthy to wield the Scrongler!" << std::endl;
	}
}
void Scrongler::attack() {
	float totalDamage = damage * terrorLevel; // Calculate the total damage based on the terror level
	std::cout << "The Scrongler attacks with a damage of " << damage << ", intensified by its terror of " << terrorLevel << "to " << totalDamage << "!" << std::endl;
	// You can add more logic here for the attack
}