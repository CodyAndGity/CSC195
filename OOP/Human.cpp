#include "Human.h"
#include "Console.h"

int Human::count = 0;
const float Human::tax = 0.2f;
void Human::read(){
	cout << "Name: ";
	//cin >> name;
	name = getValidatedData<string>();
	cout << "Age: ";
	age = getValidatedData<age_type>();
	//cin >> age; // "37"
}
void Human::write(){
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}
void Human::setAge(age_type age) {
	this->age = age;
}