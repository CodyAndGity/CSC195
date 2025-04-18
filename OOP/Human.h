#pragma once
#include <iostream>
using namespace std;

using age_type = unsigned short;
class Human {
protected:
	string name;
	unsigned short age = 0;
	static int count;
	static const float tax;
public:
	enum class Type:unsigned short {
		//using Type :unsigned short make Type take of 2 bytes instead of 4 bytes
		STUDENT = 1,
		TEACHER = 2
	};
	//enum class Character {
	//	WARRIOR,
	//	WIZARD,
	//	DEATH
	//};
	//enum class State {
	//	IDLE,
	//	PATROL,
	//	ATTACK,
	//	DEATH
	//};
	//State state = State::DEATH;//enum 'class' makes it work with multiple death
	//int s = (int)State::IDLE;
	//int s = static_cast<int>(State::IDLE);
	
public:
	Human() {
		cout << "Human constructor called\n";
		count++;
	};
	Human(string name, age_type age) {
		this->name = name;
		this->age = age;
		cout << "Human constructor called\n";

		count++;
	}
	~Human() {
		cout << "Human destructor called\n";
		count--;
	}

	virtual void read();
	virtual void write();

	virtual Type getType() = 0;//abtract method that MUST be implemented/overridden in child classes
	//=0; mean no definition, makes it abstract
	virtual void work() { cout << "Human work\n"; };//virtual means"if this is called in my chilren,
	//use their definition over mine"

	static int getCount() {
		return count;
	}
	string getName() {
		return name;
	}
	age_type getAge() {
		return age;
	}
	void setAge(age_type age);
};

//void func() {
//	cout << "funcy" << endl;
//};