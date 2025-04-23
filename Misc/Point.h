#pragma once
#include <iostream>
namespace math {
	template<typename T>
	class Point {
	public:
		Point() = default;
		Point(T x, T y) : 
			x(x), 
			y(y) 
		{}	

		Point<T> operator + (const Point<T>& input) const{
			return Point<T> (this->x + input.x, this->y + input.y);
		}

		Point<T> add(const Point<T>& input) const{
			return *this+input;
		}

		Point<T> operator - (const Point<T>& input) const{
			return Point<T>(this->x - input.x, this->y - input.y);
		}

		bool operator == (const Point<T>& input) const{
			return (this->x == input.x && this->y == input.y);
		}
		bool operator != (const Point<T>& input) const {
			return (*this == input);
		}

		friend std::ostream& operator << (std::ostream& ostream, const Point<T>& point) {
			ostream << point.getX() << ", " << point.getY();
			return ostream;
		}

		T getX() const { return x; }
		T getY() const { return y; }
	private:
		T x=0;
		T y=0;
	};
	using intPointType = Point<int>;
	using floatPointType = Point<float>;
};