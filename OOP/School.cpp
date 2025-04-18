#include "School.h"
#include "Student.h"
#include "Teacher.h"
School::~School(){
	for (Human* person : humans) {
		delete person;//hehe...
	}
	humans.clear();
}

void School::add(Human::Type type){
	Human* person = nullptr;
	switch (type)
	{
	case Human::Type::STUDENT:
		person=new Student;
		break;
	case Human::Type::TEACHER:
		person=new Teacher;
		break;
	default:
		break;
	}
	person->read();
	humans.push_back(person);
}

void School::displayAll(){
	for (Human* person : humans) {
		person->write();
	}
}

void School::displayAllOfType(Human::Type type){
	for (Human* person : humans) {
		if (person->getType() == type) {
			person->write();
		}
	}
}

void School::dispayByName(string name) {
	for (Human* person : humans) {
		if (person->getName() == name) {
			person->write();
		}
	}
}
