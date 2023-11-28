#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Friend function for overloading the + operator
    friend Complex operator+(const Complex& c1, const Complex& c2);

    // Member function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition for overloading the + operator
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex a(2.5, 3.0);
    Complex b(1.5, 2.0);

    // Using the overloaded + operator
    Complex result = a + b;

    // Displaying the result
    cout << "Result: ";
    result.display();

    return 0;
}
