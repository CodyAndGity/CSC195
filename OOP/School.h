#pragma once
#include "Human.h"
#include <vector>
class School {
public:
	~School();
	void add(Human::Type type);

	void displayAll();
	void displayAllOfType(Human::Type type);
	void dispayByName(string name);
private:
	std::vector<Human*> humans;
};