#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator*(float scalar) {
        return Complex(real * scalar, imag * scalar);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    float real, imag, scalar;

    cout << "Enter real and imaginary parts: ";
    cin >> real >> imag;

    cout << "Enter scalar value: ";
    cin >> scalar;

    Complex c(real, imag);
    Complex result = c * scalar;

    cout << "Result: ";
    result.display();

    return 0;
}
