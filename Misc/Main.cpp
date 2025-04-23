
#include <iostream>
#include <vector>
#include "point.h"
#include <fstream>
#include <string>

#define NAME "Teachy"
#define PI 3.14159f
#define DEBUG
#define XBOX

using names_type = std::vector<std::string>;
//using namespace math; does work
namespace math {
    template<typename T1, typename T2>
    T1 max(T1 a, T2 b) {
        return (a > b) ? a : b;
    }
}


 void print(const names_type& names) {
    //names[0] = "Kevy"; doesn't work if const
    for (std::string name : names) {
        std::cout << name << std::endl;
    };
};
 template<typename type>
 void streamOut(std::ostream& ostream, const type& value) {
     ostream << value << std::endl;
 };
 void streamIn(std::istream& istream, std::string& text) {
	 std::getline(istream, text);
     //istream >> text;
 };



int main(){
#ifdef XBOX
	std::cout << "XBOX" << std::endl;
#endif
#ifdef Switch
	std::cout << "Switch" << std::endl;
#endif
    

#ifdef _DEBUG//_DEBUG is not active if on release mode(select next to x64)
	std::cout << "program start" << std::endl;
#endif
    streamOut(std::cout, NAME);//cerr is error version
    //math::intPointType point(4, 5);
	//std::cin >> point;

	std::cout << PI << std::endl;
	std::ofstream file("text.txt");
	//streamOut(file, point);
	streamOut(file, "Hello");
	streamOut(file, 5);
	streamOut(file, 34.4f);
	file.close();

    std::string text;
	std::ifstream ifstream("text.txt");
    if (ifstream.is_open()) {
        while (std::getline(ifstream, text)) {
            //streamIn(ifstream, text);
            std::cout << text << std::endl;
        };
    }

	ifstream.close();

    /*streamIn(std::cin, text);
	std::cout << text << std::endl;*/

   /* math::intPointType p1(23, 34);
    math::intPointType p2(12, 10);
    math::intPointType p3;
	p3 = p1-p2;
    std::cout << p3 << std::endl;
	std::cout << p3.getX() <<", " << p3.getY() << std::endl;*/





    /*std::cout << std::max(5, 10) << std::endl;
    std::cout << math::max(6.0, 11) << std::endl;
	names_type names = { "John", "Jane", "Doe" };
	print(names);*/
}

