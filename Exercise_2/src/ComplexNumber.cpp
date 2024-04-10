#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

ComplexNumber::ComplexNumber(double real, double image) : real(real), image(image) {}

void ComplexNumber::print() const {
    cout << real;
    if (image >= 0)
        cout << "+";
    cout << image << "i";
}
// Operatore somma
ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, image + other.image);
}
//Operatore uguaglianza
bool ComplexNumber::operator==(const ComplexNumber& other) const {
    return (real == other.real) && (image == other.image);
}
//Operatore coniugato
ComplexNumber ComplexNumber::conjugate() const {
    return ComplexNumber(real, -image);
}
