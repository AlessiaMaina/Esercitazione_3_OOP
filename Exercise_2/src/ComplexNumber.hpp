#ifndef __COMPLEXNUMBER_H      // Header guards
#define __COMPLEXNUMBER_H

#include <iostream>
#include <cmath>

using namespace std;


namespace ComplexNumberLibrary{

struct ComplexNumber
{

    double realPart;                       // Corresponds to Re(z) of the Complex Number z
    double imaginaryPart;                  // Corresponds to Im(z) of the Complex Number z

    ComplexNumber() = default;             // Definition of DEFAULT CONSTRUCTOR

    ComplexNumber(double a, double b){     // Definition of the CONSTRUCTOR
        realPart = a;
        imaginaryPart = b;
    }

};

// PRINT OPERATOR
ostream& operator << (ostream& os, const ComplexNumber& z);

// SUM OPERATOR
ComplexNumber operator + (const ComplexNumber& z1, const ComplexNumber& z2);

// EQUALITY OPERATOR
bool operator == (const ComplexNumber& z1, const ComplexNumber& z2);

// FUNCTION that computes the Conjugate of the Complex Number
ComplexNumber ComplexConjugate(ComplexNumber z);

}

#endif
