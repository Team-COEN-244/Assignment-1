#include "Rational.cpp"
#include <iostream>
using namespace std;

int main() {
    
    Rational FractionTest1;
    FractionTest1.autosetRational(1, 3);

    Rational FractionTest2;
    FractionTest2.autosetRational(7, 8);

    Rational addition;
    addition.add(FractionTest1, FractionTest2);
    Rational subtraction;
    subtraction.substract(FractionTest1, FractionTest2);
    Rational division;
    division.divide(FractionTest1, FractionTest2);
    Rational mutiplication; 
    mutiplication.multiply(FractionTest1, FractionTest2);

    cout << FractionTest1.toRationalString() << " + " << FractionTest2.toRationalString() << " = " << addition.toRationalString()  << addition.toDouble() << endl;
    cout << FractionTest1.toRationalString() << " - " << FractionTest2.toRationalString() << " = " << subtraction.toRationalString()  << subtraction.toDouble() << endl;
    cout << FractionTest1.toRationalString() << " * " << FractionTest2.toRationalString() << " = " << mutiplication.toRationalString()  << mutiplication.toDouble() << endl;
    cout << FractionTest1.toRationalString() << " % " << FractionTest2.toRationalString() << " = " << division.toRationalString()  << division.toDouble() << endl;



    return 0;
}