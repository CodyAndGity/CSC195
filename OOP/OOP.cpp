
#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "School.h"
#include <vector>
using namespace std;


int main(){
	School school;
	bool userIsDone = false;
	while (!userIsDone) {
		cout << "1. Add Human\n";
		cout << "2. Display All Humans\n";
		cout << "3. Display All Humans Of Type\n";
		cout << "4. Display All Humans By Name\n";
		cout << "5. Quit\n";
		unsigned short selection;
		cin >> selection;

		switch (selection) {
		case 1:
			cout << "1. Add Student\n";
			cout << "2. Add Teacher\n";
			unsigned short type;
			cin >> type;
			school.add(static_cast<Human::Type>(type));
			break;
		case 2:
			system("cls");
			school.displayAll();
			break;
		case 3: {
			string nameToSearch;
			cout << "Enter name: ";
			cin >> nameToSearch;
			school.dispayByName(nameToSearch);
			break;
		}
		case 4:
			cout << "1. Display Students\n";
			cout << "2. Display Teacher\n";
			unsigned short typeOfAll;
			cin >> typeOfAll;
			school.displayAllOfType(static_cast<Human::Type>(typeOfAll));
			break;
		case 5:
			userIsDone = true;
			break;

		}
	}
	
}


