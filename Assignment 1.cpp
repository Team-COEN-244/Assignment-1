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
	do //the do loop is a condition for the user to end or begin the program - like a welcome message
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
		while (stopper != "stop")// while loop in order to continue the program until the user does not write "stop"
		{
			Rational Fraction1; // Fraction 1 is created
			Fraction1.setRational(); // Asking the user to put the numbers for creating the rational number
			Fraction1.getReducedRational();
			std::cout << Fraction1.toRationalString(); // The Fraction 1 will be printed as a reduced fraction

			Rational Fraction2; // Fraction 2 is created
			Fraction2.setRational(); 
			Fraction2.getReducedRational();
			std::cout << Fraction2.toRationalString();

			Rational ResultFraction; // ResultFraction is created and all the calculation results will be stocked in this value

			ResultFraction.add(Fraction1, Fraction2); // Addition of Fraction 1 and Fraction 2
			std::cout << ResultFraction.toRationalString(); // The result will be printed as reduced form (a number if it is an integer)
			std::cout << ResultFraction.toDouble(); // The result will be printed as a number with a coma and many decimals

			ResultFraction.substract(Fraction1, Fraction2);	// Substraction of Fraction 1 and Fraction 2
			std::cout << ResultFraction.toRationalString();
			std::cout << ResultFraction.toDouble();

			ResultFraction.multiply(Fraction1, Fraction2); // Multiplication of Fraction 1 and Fraction 2
			std::cout << ResultFraction.toRationalString();
			std::cout << ResultFraction.toDouble();

			ResultFraction.divide(Fraction1, Fraction2); // Division of Fraction 1 and Fraction 2
			std::cout << ResultFraction.toRationalString();
			std::cout << ResultFraction.toDouble();

			std::cout << std::endl << "If you do not want to do an other round of calculations with my program," <<
				std::endl << "please enter stop, else you will pleased to enter rational numbers" << std::endl;
			std::cin >> stopper;
		}
		return 0;
	}
}
