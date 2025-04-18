#pragma once
#include <iostream>
#include "Human.h"
using namespace std;
class Student :public Human {
public:
	Student() {
		cout << "Student constructor called\n";

	};
	Student(string name, age_type age, float gpa) :
		Human{ name, age },
		gpa{ gpa }
	{
		cout << "Student constructor called\n";

	};

	void read() override;
	void write() override;

	float getGPA() {
		return gpa;
	};
	void setGPA(float gpa) {
		this->gpa = gpa;
	};
	Type getType() override {return Type::STUDENT;}
	void work() { cout << "Student work\n"; };

	~Student() {
		cout << "Student destructor called\n";
	};
private:
	float gpa= 0.0f;
};