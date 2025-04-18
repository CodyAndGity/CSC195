#include "Teacher.h"

void Teacher::read(){
	cout << "---TEACHER---\n";
	Human::read();
	cout << "Class name: ";
	cin >> className;
	cout << "Classroom: ";
	cin >> classroom;
}

void Teacher::write(){
	cout << "---TEACHER---\n";
	Human::write();
	cout << "Class name: " << className << endl;
	cout << "Classroom: " << classroom << endl;
}
