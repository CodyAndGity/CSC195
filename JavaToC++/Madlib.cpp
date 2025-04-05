#include "Madlib.h"
#include <cstdlib>
#include <ctime>
Madlib::Madlib(string adjective, string verb, string amount) {
	this->adjective = adjective;
	this->verb = verb;
	this->amount = amount; 
}
string Madlib::assembleStory() {
	srand(time(0)); // Seed random number generator
	int randomNumber = rand() % 3 + 2; // Random number from 2 to 4
	int amountNumber = stoi(amount) * randomNumber;
	amount = to_string(amountNumber);
		string story = "Hello there! That was a crazy " + verb + " you did there! Why, you must of done it "
		+ amount + " times in row without stopping! It was a " + adjective + " performance!";
	return story;
};