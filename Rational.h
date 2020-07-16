#ifndef RATIONAL_HEADER
#define RATIONAL_HEADER

#include <string>

class Rational
{
private:
	int numerator;
	int denominator;

public:
	Rational(); // constructor

	void setRational(); // constructor which askes the user to put numbers
	void autosetRational(int, int); // constructor with already existing numbers
	void getReducedRational(); // Searching for the GCD to reduce the fraction and reduce the fraction if it is possible
	std::string toRationalString(); // Output the reduced fraction, if it is an integer, it will output the integer

	void getcommunDenominator(Rational&, Rational&); // multiply the fraction with both denominators to have a commun denominator
	void add(Rational, Rational); // adding rational numbers 
	void substract(Rational, Rational); // substracting rational numbers 
	void multiply(Rational, Rational); // multiplying rational numbers
	void divide(Rational, Rational); // dividing rational numbers 
	
	double toDouble();
};

#endif // !RATIONAL_HEADER
