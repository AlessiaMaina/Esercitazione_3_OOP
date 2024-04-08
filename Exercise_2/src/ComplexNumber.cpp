#include "ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexNumberLibrary{

// Definition of PRINT OPERATOR
ostream& operator << (ostream& os, const ComplexNumber& z)
{
    if (z.realPart == 0 && z.imaginaryPart == 0)
        os << 0 << "  [Re(z) is ZERO and Im(z) is ZERO]";
    else if (z.realPart == 0)
        os << z.imaginaryPart << "i" << "  [Re(z) is ZERO]";
    else if (z.imaginaryPart == 0)
        os << z.realPart << "  [Im(z) is ZERO]";
    else if (z.realPart > 0 && z.imaginaryPart > 0)
        os << z.realPart << "+" << z.imaginaryPart << "i" << "  [Re(z) is POSITIVE and Im(z) is POSITIVE] ";
    else if (z.realPart < 0 && z.imaginaryPart < 0)
        os << z.realPart << z.imaginaryPart << "i" << "  [Re(z) is NEGATIVE and Im(z) is NEGATIVE]";
    else if (z.realPart > 0 && z.imaginaryPart < 0)
        os << z.realPart << z.imaginaryPart << "i" << "  [Re(z) is POSITIVE and Im(z) is NEGATIVE]";
    else
        os << z.realPart << "+" << z.imaginaryPart << "i" << "  [Re(z) is NEGATIVE and Im(z) is POSITIVE]";
    return os;
}

// Definition of SUM OPERATOR
ComplexNumber operator + (const ComplexNumber &z1, const ComplexNumber &z2)
{
    double realPartSum = z1.realPart + z2.realPart;                    // Sum of Re(z1) and Re(z2)
    double imaginaryPartSum = z1.imaginaryPart + z2.imaginaryPart;     // Sum of Im(z1) and Im(z2)
    ComplexNumber z(realPartSum,imaginaryPartSum);
    return z;
}

// Definition of EQUALITY OPERATOR (with the Tolerance)
bool operator == (const ComplexNumber& z1, const ComplexNumber& z2)
{
    double Tolerance = 1e-16;
    double realTol = abs(z1.realPart - z2.realPart);
    double imaginaryTol = abs(z1.imaginaryPart - z2.imaginaryPart);
    if (realTol <= Tolerance && imaginaryTol <= Tolerance)
        return true;        // Complex Numbers are considered EQUAL
    else
        return false;       // Complex Numbers are considered DIFFERENT
}

// Definition of FUNCTION that computes the Conjugate of the complex number
ComplexNumber ComplexConjugate(ComplexNumber z)
{
    return ComplexNumber(z.realPart, - z.imaginaryPart);
}


}
