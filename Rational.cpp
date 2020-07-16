#include "Rational.h"
#include <iostream>

// Constructor class
Rational::Rational()
{
	numerator = 1;
	denominator = 2;
}

// function for user input to enter a certain rational number
void Rational::setRational()
{
	std::cout << std::endl << "Please enter an integer as the numerator: ";
	std::cin >> numerator;
	std::cout << "Please enter an integer as the denominator: ";
	std::cin >> denominator;
}
// function which enters these numbers into the position that it is intended to (numerator or denominator)
void Rational::autosetRational(int num, int den)
{
	numerator = num;
	denominator = den;
}
// function that 
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

std::string Rational::toRationalString()
{
	std::string RationalString;
	std::string negative, slash, num, den;

	negative = "- ";
	slash = " / ";
	if (denominator == 1)
		RationalString = std::to_string(numerator);
	else
	{
		if (numerator < 0 || denominator < 0)
		{
			num = std::to_string(abs(numerator));
			den = std::to_string(abs(denominator));
			RationalString = negative + num + slash + den;
		}
		else if (numerator < 0 && denominator < 0)
		{
			num = std::to_string(abs(numerator));
			den = std::to_string(abs(denominator));
			RationalString = num + slash + den;
		}
		else
		{
			num = std::to_string(numerator);
			den = std::to_string(denominator);
			RationalString = num + slash + den;
		}
	}
	return RationalString;
}

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

void Rational::divide(Rational Fraction1, Rational Fraction2)
{
	int result_numerator, result_denominator;

	result_numerator = Fraction1.numerator * Fraction2.denominator;
	result_denominator = Fraction1.denominator * Fraction2.numerator;

	autosetRational(result_numerator, result_denominator);
	std::cout << std::endl << "The division's result of both rational numbers is: ";
	getReducedRational();
}

double Rational::toDouble()
{
	double result{ 0 };
	result = static_cast<double> (numerator) / static_cast<double> (denominator);
	std::cout << std::endl << "It is equal to: ";
	return  result;
}
