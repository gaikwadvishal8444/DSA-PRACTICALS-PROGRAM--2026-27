#include <iostream>
using namespace std;

class complex {
private:
    float real;
    float imag;

public:
    complex() {
        real = 0;
        imag = 0;
    }

    complex(float r, float i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << "+" << imag << "i" << endl;
    }

    complex add(complex c) {
        return complex(real + c.real, imag + c.imag);
    }

    complex subtract(complex c) {
        return complex(real - c.real, imag - c.imag);
    }

    complex multiply(complex c) {
        float r = real * c.real - imag * c.imag;
        float i = real * c.imag + imag * c.real;
        return complex(r, i);
    }
};

int main() {
    complex c1(4, 5), c2(2, 3);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    complex sum = c1.add(c2);
    cout << "Sum: ";
    sum.display();

    complex diff = c1.subtract(c2);
    cout << "Difference: ";
    diff.display();

    complex prod = c1.multiply(c2);
    cout << "Product: ";
    prod.display();

    return 0;
}

/*First Complex Number: 4+5i
Second Complex Number: 2+3i
Sum: 6+8i
Difference: 2+2i
Product: -7+22i
PS D:\Mr. Vishal Eknath Gaikwad> */