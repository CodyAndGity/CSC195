#pragma once
#include <string>
using namespace std;
class Madlib {
private:
	string adjective;
	string verb;
	string amount;
public:
	Madlib(string adjective, string verb,string amount);
	string assembleStory();
};