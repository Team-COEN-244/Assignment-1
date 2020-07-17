// Mélina Deneuve ID#40153103
// Rudy Zoghaib   ID#40025399
// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Rational.h"

int main()
{
	std::string stopper;
	bool wrong{ false };  
	std::cout << "This program will take 2 fractions you choose and make differents calculations with it. " 
		<< std::endl << "The program will end until you enter 'stop' ." << std::endl << "Have fun !"
		<< std::endl << "Do you want to make funny calculations with my program ?";
	do //the do loop finds if the fraction is applicable to continue using if else statements
	{
		std::cin >> stopper;
		if (stopper != "no")
		{
			if (stopper != "yes")
			{
				wrong = true;
				std::cout << "Please enter yes to continue, or no to end the program.";
			}
			else
			{
				wrong = false;
			}

		}
		else
		{
			wrong = false;
		}
	} while (wrong);

	if (stopper == "no")
	{
		return 0;
	}
	else
	{	
		//all of the functions down below have setters and getters. 
		//then they are called 
		while (stopper != "stop")// while loop in order to see if the fraction entered by the user is applicable
		{
			Rational Fraction1;
			Fraction1.setRational(); 
			Fraction1.getReducedRational();
			std::cout << Fraction1.toRationalString();

			Rational Fraction2;
			Fraction2.setRational(); 
			Fraction2.getReducedRational();
			std::cout << Fraction2.toRationalString();

			Rational ResultFraction;

			ResultFraction.add(Fraction1, Fraction2); 
			std::cout << ResultFraction.toRationalString();
			std::cout << ResultFraction.toDouble();

			ResultFraction.substract(Fraction1, Fraction2);
			std::cout << ResultFraction.toRationalString();
			std::cout << ResultFraction.toDouble();

			ResultFraction.multiply(Fraction1, Fraction2);
			std::cout << ResultFraction.toRationalString();
			std::cout << ResultFraction.toDouble();

			ResultFraction.divide(Fraction1, Fraction2);
			std::cout << ResultFraction.toRationalString();
			std::cout << ResultFraction.toDouble();

			std::cout << std::endl << "If you do not want to do an other round of calculations with my program," <<
				std::endl << "please enter stop, else you will pleased to enter rational numbers" << std::endl;
			std::cin >> stopper;
		}
		return 0;
	}
}
