#pragma once
#include <iostream>
#include "Human.h"
using namespace std;
using classroom_type = unsigned short;
class Teacher :public Human {
public:
	Teacher() {
		cout << "Teacher constructor called\n";
	};
	Teacher(string name, age_type age, string className, classroom_type classroom):Human{ name, age } {
		//this->salary = salary;
		this->className = className;
		this->classroom = classroom;
		cout << "Teacher constructor called\n";
	};

	void read() override;
	void write() override;
	string getClassName() {
		return className;
	};
	string setClassName(string className) {
		this->className = className;
	};
	classroom_type getClassroom() {
		return classroom;
	};
	void setClassroom(classroom_type classroom) {
		if (classroom < 300 || classroom > 400) return;
		this->classroom = classroom;
	};
	void work() { cout << "teacher work\n"; };//overide no required for overrinding

	Type getType() override {return Type::TEACHER;}
private:
	//int32_t id = 0;
	//float salary = 0;
	string className;
	classroom_type classroom=0;
};