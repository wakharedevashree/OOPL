/*#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int imag;
    complex(){
        real=0;
        imag=0; 
    }
    complex(complex &obj1,complex &obj2){
        real=obj1.real;
        imag=obj2.imag;
    }
    void input(){
        cout<<"Enter the value of real part:";
        cin>>real;
        cout<<"Enter the value of imag part:";
        cin>>imag;

    }
    void display(){
        cout<<"Complex Number is :"<<real<<" + "<<imag<<" i "<<endl;
    }
    friend complex operator+(complex &x,complex &y);
};
  complex operator+(complex &x,complex &y){
     complex temp;
        temp.real=x.real+y.real;
        temp.imag=x.imag+y.imag;
        return temp;
   }
    complex operator-(complex &x,complex &y){
    complex temp;
    temp.real=x.real-y.real;
    temp.imag=x.imag-y.imag;
      return temp;
   }
    complex operator*(complex &x,complex &y){
    complex temp;
     temp.real= x.real * y.real - x.imag * y.imag;
     temp.imag=x.real * y.imag + x.imag * y.real;
       return temp;
   }

 
int main(){
    complex obj1,obj2,result;
    int ch,k;
    do{
        cout<<"Menu\n1.Addition\n2.subtraction\n3.Multiplication\nEnter your Choice:";
        cin>>ch;
        switch(ch){
            case 1:obj1.input();
                   obj2.input();
                  result=obj1+obj2;
                   result.display();
                   break;
            case 2:obj1.input();
                   obj2.input();
                   result=obj1-obj2;
                   result.display();  
                   break;
            case 3:obj1.input();
                   obj2.input();
                   result=obj1*obj2;
                   result.display();  
                   break;
            default:cout<<"wrong option"<<endl;
        }
        cout<<"if you want to continue enter 1:";
        cin>>k;
    }while(k==1);
    
    return 0;
}*/


/*#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    friend istream& operator>>(istream &input,complex &c);
    friend ostream &operator<<(ostream &output, complex &c);
    friend complex operator+(complex &x,complex &y);
    friend complex operator-(complex &x,complex &y);
    friend complex operator*(complex &x, complex &y);
};
istream &operator>>(istream &input, complex &c){
    cout<<"ENter real part:";
    input>>c.real;
    cout << "ENter imaginary part:";
    input>>c.imag;
    return input;
}
 ostream &operator<<(ostream &output, complex &c){
    output<<"Complex no :"<<c.real<<"+"<<c.imag<<"i"<<endl;
    return output;
}
complex operator+(complex &x, complex &y){
    complex temp;
    temp.real=x.real+y.real;
    temp.imag=x.imag+y.imag;
    return temp;
}

complex operator-(complex &x, complex &y)
{
    complex temp;
    temp.real = x.real - y.real;
    temp.imag = x.imag - y.imag;
    return temp;
}

complex operator*(complex &x, complex &y)
{
    complex temp;
    temp.real = x.real* y.real-x.imag*y.imag;
    temp.imag = x.real*y.imag + x.imag*y.real;
    return temp;
}
int main()
{
    complex obj1, obj2, result;
    int ch, k;

    do
    {
        cout << "Menu\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Exit\nEnter your Choice: ";
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
            break;
        default:
            cout << "Wrong choice" << endl;
        }

        cout << "If you want to continue, enter 1: ";
        cin >> k;
    } while (k == 1);

    return 0;
}*/

/*#include <iostream>
using namespace std;
class searching
{
public:
    int n;
    int key, i, flag = 0;
    int mid, high, low;

public:
    void linear(int a[], int n)
    {
        cout << "Enter the no of Array elemnts:";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " " << endl;
        }
        cout << "Enter the key element for searching :";
        cin >> key;
        for (i = 0; i < n; i++)
        {
            if (key == a[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << key << " element is found " << endl;
        }
        else
        {
            cout << key << " element is not found " << endl;
        }
    }

    void binary(int a[], int n)
    {
        cout << "Enter the no of Array elemnts:";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " " << endl;
        }
        cout << "Enter the key element for searching :";
        cin >> key;
        low = 0;
        high = n - 1;
        mid = (low + high) / 2;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (key == a[mid])
            {
                flag = 1;
                break;
            }
            else if (a[mid] < key)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (flag == 1)
        {
            cout << key << " element is found " << endl;
        }
        else
        {
            cout << key << " element is not found " << endl;
        }
    }
};

int main()
{
    searching s;
    int ch, k, n;
    int a[s.n];
    do
    {
        cout << "Menu\n1.Linear Search\n2.Binary Search\n3Exit\nEnter your Choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s.linear(a, n);
            break;
        case 2:
            s.binary(a, n);
            break;
        case 3:
            break;
        default:
            cout << "Wrong Choice" << endl;
        }
        cout << "If you want to continue enter 1:";
        cin >> k;
    } while (k == 1);
    return 0;
}*/


/*#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    friend istream& operator>>(istream &input,Complex &c);
    friend ostream &operator<<(ostream &output, Complex &c);
    friend Complex operator+(Complex &x,Complex &y);
    friend Complex operator-(Complex &x, Complex &y);
     Complex operator*(Complex &x){
        Complex temp;
        temp.real=real*x.real-imag*x.imag;
        temp.imag=imag*x.imag+imag*x.real;
        return temp;
     }
     Complex operator/(Complex &x){
        Complex temp;
        int deno=x.real*x.real+x.imag*x.imag;
        if(deno==0){
            cout<<"Wrong ";
        }
        else{
            temp.real=real*x.real+imag*x.imag/deno;
            temp.imag=imag*x.real-real*x.imag/deno;
            return temp;
        }
     }
};
 istream &operator>>(istream &input, Complex &c){
   cout<<"Enter the real part of Complex no:";
   input>>c.real;
   cout << "Enter the imaginary part of Complex no:";
   input >> c.imag;
   return input;
}
ostream &operator<<(ostream &output, Complex &c){
    cout<<"Complex no is :"<<c.real<<" + "<<c.imag<<" i "<<endl;
    return output;
}
Complex operator+(Complex &x, Complex &y){
    Complex temp;
    temp.real=x.real+y.real;
    temp.real = x.imag + y.imag;
    return temp;
}

Complex operator-(Complex &x, Complex &y)
{
    Complex temp;
    temp.real = x.real - y.real;
    temp.real = x.imag - y.imag;
    return temp;
}

int main()
{
    Complex obj1, obj2, result;
    int ch, t;
    do
    {
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your choice\n"
             << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cin>>obj1>>obj2;
            result = obj1 + obj2;
            cout<<result;
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
        cout << "If you want to continue press 1" << endl;
        cin >> t;
    } while (t == 1);

    return 0;
}*/

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
