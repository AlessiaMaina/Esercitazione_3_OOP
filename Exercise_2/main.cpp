#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;
using namespace ComplexNumberLibrary;


int main()
{
    // Application of PRINT OPERATOR
    ComplexNumber z1(1.00000000000000004, 2.0000000000000006);    // Example suggested in the file "README.pdf"
    ComplexNumber z2(1.000000000000008, 2.000000000003);
    ComplexNumber z3(-5.268013, -4.6798);
    cout << "The Complex Number z1 is: " << z1 << endl;
    cout << "The Complex Number z2 is: " << z2 << endl;
    cout << "The Complex Number z3 is: " << z3 << "\n" << endl;

    // Application of SUM OPERATOR
    ComplexNumber sum = z1 + z3;
    cout << "The Sum of z1 and z3 is: " << sum << "\n" << endl;

    // Application of EQUALITY OPERATOR
    if (z1 == z2)
        cout << "EQUALITY OPERATOR == : z1 and z2 are EQUAL  (z1 == z2) \n" << endl;
    else
        cout << "INEQUALITY OPERATOR != : z1 and z2 are DIFFERENT  (z1 != z2) \n"
             << "Difference between Real Parts: " << abs(z1.realPart - z2.realPart) << "\n"
             << "Difference between Imaginary Parts: " << abs(z1.imaginaryPart - z2.imaginaryPart) << "\n" << endl;

    // Application of FUNCTION that computes the Conjugate of the complex number
    ComplexNumber z1_Conjugate = ComplexConjugate(z1);
    ComplexNumber z3_Conjugate = ComplexConjugate(z3);
    cout << "The Complex Conjugate of z1 is: " << z1_Conjugate << endl;    // Example suggested in the file "README.pdf"
    cout << "The Complex Conjugate of z3 is: " << z3_Conjugate << endl;

    return 0;
}
