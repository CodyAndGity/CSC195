#include "ContainersDemo.h"
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
using namespace std;
void ContainersDemo::arrayClassDemo(){
	array<string, 7> daysOfWeek = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	//makes an array and iterates through it, outputting each element to the console
	for (short i = 0; i < daysOfWeek.size(); i++) {
		cout << daysOfWeek[i] << endl;
	}
}
void ContainersDemo::vectorDemo() {
	vector<int> numbers = { 1,2,3,4,5 };
	//initializes and populates a vector
	numbers.push_back(6);
	numbers.push_back(7);
	//adds elements 6 and 7 to the end
	numbers.pop_back();
	//removes 7
	for (short i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}
	//iterates through the entire vector, outputting each element to the console
}
void ContainersDemo::listDemo() {
	list<string> fruitNames = { "Apple","Banana","Orange" };
	//initializes and populates a list
	fruitNames.push_back("Mango");
	//adds element "Mango" to the back
	fruitNames.push_front("Grapes");
	//adds element "Grapes" to the front
	fruitNames.remove("Orange");
	//removes orange
	for (auto iterator = fruitNames.begin(); iterator != fruitNames.end(); iterator++) {
		cout << *iterator << endl;
	}
	//iterates(with an iterator) through the entire list, outputting each element to the console

}
void ContainersDemo::mapDemo() {
	map<string, int> groceryStock = { {"Apples", 10}, {"Bananas", 5}, {"Oranges", 8} };
	//initializes and populates a vector
	groceryStock["Bananas"] = 11;
	//changes the value "Bananas" maps to from 5 to 11
	for (auto iterator = groceryStock.begin(); iterator != groceryStock.end();iterator++) {
		cout << iterator->first << ": " << iterator->second << endl;
	}
	//iterates(with an iterator) through the entire map, outputting each element to the console

}