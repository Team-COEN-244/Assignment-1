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
	void getReducedRational(int, int);

	void add();
	void substract();
	void multiply();
	void divide();
	std::string toRationalString();
	double toDouble();

	~Rational();

};

#endif // !RATIONAL_HEADER
