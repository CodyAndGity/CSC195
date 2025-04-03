#pragma once
#include <iostream>
#include <string>
class Scrongler {
public:
	void inflictTerror();
	void determineWielder(std::string potentialWeilder);
	void attack();

private:
	const short terrorLevel = 9001;
	float damage = 9999.9999;
	std::string wielderName;
};
