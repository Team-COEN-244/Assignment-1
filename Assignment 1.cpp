// Mélina Deneuve ID#40153103
// Rudy 
// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "Rational.h"

int main()
{
	int a, b;
	std::cout << "Please enter 2 integers";
	std::cin >> a;
	std::cin >> b;
	getReducedRational(a, b);

	return 0;
}