
#include <iostream>
#include "Madlib.h"
using namespace std;

int main(){
	cout << "Welcome to the Madlib game!" << endl; 
	cout << "Please enter an adjective: ";
    string inputAdjective = "";
	cin >> inputAdjective; 
	cout << "Please enter an verb: ";
	string inputVerb = "";
	cin >> inputVerb; // Read the verb from user input
	cout << "Please enter an amount (number): ";
	string inputAmount = "";
	cin >> inputAmount; // Read the amount from user input
	
	Madlib madlib(inputAdjective,inputVerb,inputAmount);
	// Assemble the story using the Madlib object
	string story = madlib.assembleStory();
	// Output the assembled story
	cout << "Here is your madlib story:\n";
	cout << story << endl; // Print the final madlib story

}


