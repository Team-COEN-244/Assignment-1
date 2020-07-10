#include "Rational.h"

Rational::Rational()
{
	numerator = 1;
	denominator = 2;
}

void setRational()
{

}

void getReducedRational(int numerator, int denominator)
{
	int rest, num{ numerator }, den{ denominator };

	while (num % den != 0)
	{
		rest = num % den;
		num = den;
		den = rest;
	}
	numerator = numerator / den;
	denominator = denominator / den;
	std::cout << numerator << " / " << denominator;
}

void add()
{

}

void substract()
{

}

void multiply()
{

}

void divide()
{

}

std::string toRationalString()
{
	return 0;
}

double toDouble()
{
	return 0;
}
