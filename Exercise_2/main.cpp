#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

int main() {
    //Con i numeri dell'esempio
    ComplexNumber a(1, 2);
    ComplexNumber b(1, -2);

    cout << "a = ";
    a.print();
    cout << endl;

    cout << "b = ";
    b.print();
    cout << endl;

    cout << "a + b = ";
    (a + b).print();
    cout << endl;

    cout << "a == b: " << (a == b ? "true" : "false") << endl;

    cout << "Conjugate of a: ";
    a.conjugate().print();
    cout << endl;

    cout << "Conjugate of b: ";
    b.conjugate().print();
    cout << endl;

    return 0;
}
