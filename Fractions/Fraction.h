#pragma once
namespace mathlib {
	template<typename type>
	class Fraction {
	private:
		type numerator = 1;
		type denominator = 1;

		
		
		float findGCD(type a, type b) {
			while (b != 0){
				type temp = b;
					b = a % b;
					a = temp;
					return a;
			}
		}
	public:
		Fraction<float> simplify() {
			Fraction<float> resultFraction;
			float gcd = findGCD(abs(numerator), abs(denominator));
			resultFraction.setNumerator(numerator / gcd);
			resultFraction.setDenominator(denominator / gcd);
			if (resultFraction.getDenominator < 0) {
				resultFraction.setNumerator( - resultFraction.numerator);
				resultFraction.setDenominator( - resultFraction.denominator);
			};
			//*this = resultFraction;
			return resultFraction;
		};
		Fraction() = default;
		Fraction<float> simplify(Fraction<type> input) {
			return input.simplify;
		};
		Fraction(type inputNumerator, type inputDenominator) {
			numerator = inputNumerator;
			if (!setDenominator(inputDenominator)) {
				denominator = 1;
			}
		}
		Fraction<type> operator + (const Fraction<type>& input) const {
			//frac 1 num(frax2 denum) + frac2 num(frax1 denum)
			type resultNumerator = this->numerator * input.denominator +
				input.numerator * this->denominator;
			type resultDenominator = this->denominator * input.denominator;
			Fraction<type> resultFraction(resultNumerator, resultDenominator);
			return resultFraction;
		}
		friend std::ostream& operator << (std::ostream& ostream, const Fraction<type>& fraction) {
			ostream << fraction.numerator << "/" << fraction.denominator;
			return ostream;
		}
		type getNumerator() const { return numerator; }
		type getDenominator() const { return denominator;}
		type setNumerator(type inputNumerator) {
			numerator = inputNumerator;
			return numerator;
		};
		bool setDenominator(type inputDenominator) {
			denominator = inputDenominator;
			if (!inputDenominator) {
				denominator = 1;
				return false;//false if it is 0
			}
			else {
				return true;//was set correctly
			};
			return true;
		};
	};
}