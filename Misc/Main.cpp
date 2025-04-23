
#include <iostream>
#include <vector>
#include "point.h"
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




int main(){
    math::intPointType p1(23, 34);
    math::intPointType p2(12, 10);
    math::intPointType p3;
	p3 = p1-p2;
    std::cout << p3 << std::endl;
	std::cout << p3.getX() <<", " << p3.getY() << std::endl;





    /*std::cout << std::max(5, 10) << std::endl;
    std::cout << math::max(6.0, 11) << std::endl;
	names_type names = { "John", "Jane", "Doe" };
	print(names);*/
}

