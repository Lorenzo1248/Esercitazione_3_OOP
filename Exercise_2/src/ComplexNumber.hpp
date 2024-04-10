#ifndef Complexnumber_H
#define Complexnumber_H

struct ComplexNumber {
    double real;
    double image;

    //Creo l'oggetto numero complesso
    ComplexNumber(double real, double image);
    void print() const;

    ComplexNumber operator+(const ComplexNumber& other) const;
    bool operator==(const ComplexNumber& other) const;
    ComplexNumber conjugate() const;
};

#endif
