#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double realPart = 0, double imaginaryPart = 0) : real(realPart), imaginary(imaginaryPart) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    bool operator==(const Complex& other) const {
        return real == other.real && imaginary == other.imaginary;
    }

    void display() const {
        cout << real << " + " << imaginary << "i\n";
    }
};

int main() {
    Complex first(2, 3);
    Complex second(4, 5);
    Complex result = first + second;
    result.display();
    cout << (result == Complex(6, 8) ? "Equal" : "Different") << '\n';
    return 0;
}
