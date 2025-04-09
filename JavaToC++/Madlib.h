#pragma once
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
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