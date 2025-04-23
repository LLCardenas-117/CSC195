#pragma once

namespace mathlib {

	template<typename T>
	class Fraction {
	public:
		Fraction() = default;

		Fraction(int numerator, int denominator) {
			if (numerator != 0 && denominator != 0) {
				_numerator = numerator;
				_denominator = denominator;
			}
		}

		Fraction<T> operator + (const Fraction<T>& other) const {
			return Fraction<T>(_numerator + other._numerator, _denominator + other._denominator);
		}

		Fraction<T> operator - (const Fraction<T>& other) const {
			return Fraction<T>(_numerator - other._numerator, _denominator - other._denominator);
		}

		Fraction<T> operator * (const Fraction<T>& other) const {
			return Fraction<T>(_numerator * other._numerator, _denominator * other._denominator);
		}

		Fraction<T> operator / (const Fraction<T>& other) const {
			return Fraction<T>(_numerator / other._numerator, _denominator / other._denominator);
		}

		bool operator == (const Fraction<T>& other) const {
			return (this->_numerator == other._numerator && this->_denominator == other._denominator);
		}

		bool operator != (const Fraction<T>& other) const {
			return !(*this == other);
		}

		bool operator < (const Fraction<T>& other) const {
			return (this->ToFloat() < other.ToFloat());
		}

		bool operator > (const Fraction<T>& other) const {
			return (this->ToFloat() > other.ToFloat());
		}

		bool operator <= (const Fraction<T>& other) const {
			return (this->ToFloat() <= other.ToFloat());
		}

		bool operator >= (const Fraction<T>& other) const {
			return (this->ToFloat() >= other.ToFloat());
		}

		friend std::ostream& operator << (std::ostream& ostream, const Fraction<T>& p) {
			ostream << p._numerator << ", " << p._denominator << std::endl;

			return ostream;
		}

		friend std::istream& operator >> (std::istream& istream, Fraction<T>& p) {
			istream >> p._numerator;
			istream >> p._denominator;

			return istream;
		}

		int Simplify() {
			return _numerator % _denominator;
		}

		float ToFloat() const {
			return _numerator / (float)_denominator;
		}

	private:
		int _numerator;
		int _denominator;
	};
}