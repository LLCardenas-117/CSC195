#pragma once
#include <iostream>

namespace cordMath {
	template<typename T>

	class Point {
	public:
		Point() = default;
		Point(T x, T y) :
			_x{ x },
			_y{ y }
		{ }

		Point<T> operator + (const Point<T>& other) const {
			return Point<T>(_x + other._x, _y + other._y);
		}

		Point<T> operator - (const Point<T>& other) const {
			return Point<T>(_x - other._x, _y - other._y);
		}

		bool operator == (const Point<T> other) const {
			return (this->_x == other._x && this->_y == other._y);
		}

		bool operator != (const Point<T> other) const {
			return !(*this == other);
		}

		friend std::ostream& operator << (std::ostream& ostream, const Point<T>& p) {
			ostream << p._x << ", " << p._y << std::endl;

			return ostream;
		}

		friend std::istream& operator >> (std::istream& istream, Point<T>& p) {
			istream >> p._x;
			istream >> p._y;

			return istream;
		}

		T GetX() const { return _x; };
		T GetY() const { return _y; };

	private:
		T _x = 0;
		T _y = 0;
	};

	using ipoint = Point<int>;
	using fpoint = Point<float>;

}