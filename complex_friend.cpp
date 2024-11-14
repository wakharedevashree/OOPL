

#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;

    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // Friend function declarations
    friend istream &operator>>(istream &input, Complex &c);
    friend ostream &operator<<(ostream &output, Complex &c);
    friend Complex operator+(Complex &x, Complex &y);
    friend Complex operator-(Complex &x, Complex &y);

    // Multiplication operator overloading
    Complex operator*(Complex &x)
    {
        Complex temp;
        temp.real = real * x.real - imag * x.imag;
        temp.imag = real * x.imag + imag * x.real;
        return temp;
    }

    // Division operator overloading
    Complex operator/(Complex &x)
    {
        Complex temp;
        int deno = x.real * x.real + x.imag * x.imag;
        if (deno == 0)
        {
            cout << "Division by zero!" << endl;
        }
        else
        {
            temp.real = (real * x.real + imag * x.imag) / deno;
            temp.imag = (imag * x.real - real * x.imag) / deno;
        }
        return temp;
    }
};

// Friend function definitions

istream &operator>>(istream &input, Complex &c)
{
    cout << "Enter the real part of Complex no: ";
    input >> c.real;
    cout << "Enter the imaginary part of Complex no: ";
    input >> c.imag;
    return input;
}

ostream &operator<<(ostream &output, Complex &c)
{
    output << "Complex no is: " << c.real << " + " << c.imag << "i" << endl;
    return output;
}

Complex operator+(Complex &x, Complex &y)
{
    Complex temp;
    temp.real = x.real + y.real;
    temp.imag = x.imag + y.imag; // Corrected assignment
    return temp;
}

Complex operator-(Complex &x, Complex &y)
{
    Complex temp;
    temp.real = x.real - y.real;
    temp.imag = x.imag - y.imag; // Corrected assignment
    return temp;
}

// Main function
int main()
{
    Complex obj1, obj2, result;
    int ch, t;

    do
    {
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your choice\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cin >> obj1 >> obj2;
            result = obj1 + obj2;
            cout << result;
            break;
        case 2:
            cin >> obj1 >> obj2;
            result = obj1 - obj2;
            cout << result;
            break;
        case 3:
            cin >> obj1 >> obj2;
            result = obj1 * obj2;
            cout << result;
            break;
        case 4:
            cin >> obj1 >> obj2;
            result = obj1 / obj2;
            cout << result;
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
        cout << "If you want to continue, press 1: ";
        cin >> t;
    } while (t == 1);

    return 0;
}
