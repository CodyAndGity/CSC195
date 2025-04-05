#include "Student.h"
#include <iostream>
using namespace std;

class Person{
public:
    float weight;
    int age;
    void function();
};

int main() {
    Student student;
    student.SetName("Bob");
    student.Write();
    Person person;
    person.age = 19;
    char initial = 'D';
    unsigned int i = (int)initial;
	//printf("%d\n", i); // printf is from C, but still works in C++
	cout << i << std::endl; // Use std::cout for C++ style output
	cout << sizeof(char) << std::endl; // Output the size of int
	cout << sizeof(Person) << std::endl; // Output the size of Person class, which includes all its members
	char c = 'A';

    i++;
    i += 5;

    cout << (int)c << std::endl; // Output the size of int
    cout << &i << std::endl; // Output the size of int


    f();
    cout << "Hello, World!" << endl;
    cout << "---GitHub Online---" << endl;
    return 0;
}
