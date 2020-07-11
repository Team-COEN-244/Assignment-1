#ifndef RATIONAL_HEADER
#define RATIONAL_HEADER

#include <string>

class Rational
{
private:
	int numerator;
	int denominator;

public:
	Rational();

	void setRational();
	void autosetRational(int, int);
	void getReducedRational();
	std::string toRationalString();

	void getcommunDenominator(Rational&, Rational&);
	void add(Rational, Rational);
	void substract(Rational, Rational);
	void multiply(Rational, Rational);
	void divide(Rational, Rational);
	
	double toDouble();
};

#endif // !RATIONAL_HEADER
