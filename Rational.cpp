#include "Rational.h"
#include <iostream>

// Constructor class
Rational::Rational()
{
	numerator = 1;
	denominator = 2;
}

// Function asking the user to enter a certain rational number
void Rational::setRational()
{
	std::cout << std::endl << "Please enter an integer as the numerator: ";
	std::cin >> numerator;
	std::cout << "Please enter an integer as the denominator: ";
	std::cin >> denominator;
	while (denominator == 0)
	{
		std::cout<<"Please 0 is not acceptable for a denominator, enter an other number";
		std::cin>>denominator;
	}
}
// Function which enters these numbers into the position that it is intended to (numerator or denominator)
void Rational::autosetRational(int num, int den)
{
	numerator = num;
	denominator = den;
}
// Function that searches for rest of divisions to reduce the fraction
void Rational:: getReducedRational()
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
}
// outputs the reduced fraction, if it is an integer, it will output the integer
std::string Rational::toRationalString()
{
	std::string RationalString;
	std::string negative, slash, num, den;

	negative = "- ";
	slash = " / ";
	if (denominator == 1) // It verifies that the numerator or denominator or both are negative or positive 
		RationalString = std::to_string(numerator);
	else
	{
		if (numerator < 0 || denominator < 0)
		{
			num = std::to_string(abs(numerator));
			den = std::to_string(abs(denominator));
			RationalString = negative + num + slash + den; // Then it prints out the result as a negative result
		}
		else if (numerator < 0 && denominator < 0)
		{
			num = std::to_string(abs(numerator));
			den = std::to_string(abs(denominator));
			RationalString = num + slash + den; // It prints out as a positive result (in case of 2 negative integers ad num and den)
		}
		else
		{
			num = std::to_string(numerator);
			den = std::to_string(denominator);
			RationalString = num + slash + den; // nothing is changed when both integers are positive
		}
	}
	return RationalString;
}
// The function multiplies both fraction with the other's denominator to get a commun denominator, to be able to add / substract
void Rational::getcommunDenominator(Rational& Fraction1, Rational& Fraction2) 
{
	if (Fraction1.denominator != Fraction2.denominator)
	{
		Fraction1.numerator = Fraction1.numerator * Fraction2.denominator;
		Fraction2.numerator = Fraction2.numerator * Fraction1.denominator;
		Fraction1.denominator = Fraction1.denominator * Fraction2.denominator;
		Fraction2.denominator = Fraction1.denominator;
	}
}
// addition is easier with both denominator as equal
void Rational::add(Rational Fraction1, Rational Fraction2)
{
	int result_numerator, result_denominator;
	
	getcommunDenominator(Fraction1, Fraction2);
	result_numerator = Fraction1.numerator + Fraction2.numerator;
	result_denominator = Fraction1.denominator;

	autosetRational(result_numerator, result_denominator);
	std::cout << std::endl << "The addition's result of both rational numbers is: ";
	getReducedRational();
}
// substraction is doable when both denominators are equal
void Rational:: substract(Rational Fraction1, Rational Fraction2)
{
	int result_numerator, result_denominator;

	getcommunDenominator(Fraction1, Fraction2);
	result_numerator = Fraction1.numerator - Fraction2.numerator;
	result_denominator = Fraction1.denominator;

	autosetRational(result_numerator, result_denominator);
	std::cout << std::endl << "The substraction's result of both rational numbers is: ";
	getReducedRational();
}

void Rational:: multiply(Rational Fraction1, Rational Fraction2)
{
	int result_numerator, result_denominator;

	result_numerator = Fraction1.numerator * Fraction2.numerator;
	result_denominator = Fraction1.denominator * Fraction2.denominator;

	autosetRational(result_numerator, result_denominator);
	std::cout << std::endl << "The multiplication's result of both rational numbers is: ";
	getReducedRational();
}
// This function does not divides, but multiplies Fraction 1 with the inverse of the Fraction 2
void Rational::divide(Rational Fraction1, Rational Fraction2)
{
	int result_numerator, result_denominator;

	result_numerator = Fraction1.numerator * Fraction2.denominator;
	result_denominator = Fraction1.denominator * Fraction2.numerator;

	autosetRational(result_numerator, result_denominator);
	std::cout << std::endl << "The division's result of both rational numbers is: ";
	getReducedRational();
}
// Output of the number as a double
double Rational::toDouble()
{
	double result{ 0 };
	result = static_cast<double> (numerator) / static_cast<double> (denominator);
	std::cout << std::endl << "It is equal to: ";
	return  result;
}
