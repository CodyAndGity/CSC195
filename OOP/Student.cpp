#include "Student.h"
#include "Console.h"

void Student::read(){
	cout << "---STUDENT---\n";
	Human::read();
	cout << "GPA: ";
	gpa=getValidatedData<float>();
}

void Student::write() {
	cout << "---STUDENT---\n";
	Human::write();
	cout << "GPA: " << gpa << endl;
}
