//Header file for rational 

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

	void setRational(); // Constructor function which asks the user to put numbers
	void autosetRational(int, int); // Constructor function with already existing numbers
	void getReducedRational(); // Getting the rests of all divisions between the numerator and denominator until it is 0 to get the reduced fraction
	std::string toRationalString(); // Output the reduced fraction, if it is an integer, it will output the integer

	void getcommunDenominator(Rational&, Rational&); // multiply the fraction with both denominators to have a commun denominator
	void add(Rational, Rational); // adding rational numbers 
	void substract(Rational, Rational); // substracting rational numbers 
	void multiply(Rational, Rational); // multiplying rational numbers
	void divide(Rational, Rational); // dividing rational numbers 
	
	double toDouble();
};

#endif // !RATIONAL_HEADER
