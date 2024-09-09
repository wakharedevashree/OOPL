#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int imag;
    complex(){
        real=0;
        imag=0;
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
    complex operator*(complex &a){
        complex temp;
        temp.real=real*a.real-imag*a.imag;
        temp.imag=real*a.imag+imag*a.real;
        return temp;
    }
    complex operator+(complex &a){
        complex temp;
        temp.real=real+a.real;
        temp.imag=imag+a.imag;
        return temp;
    }
    complex operator-(complex &a){
        complex temp;
        temp.real=real-a.real;
        temp.imag=imag-a.imag;
        return temp;
    }
};
int main(){
    complex obj1,obj2,obj3;
    int ch,k;
    do{
        cout<<"Menu\n1.Addition\n2.subtraction\n3.Multiplication\nEnter your Choice:";
        cin>>ch;
        switch(ch){
            case 1:obj1.input();
                   obj2.input();
                   obj3=obj1+obj2;
                   obj3.display();
                   break;
            case 2:obj1.input();
                   obj2.input();
                   obj3=obj1-obj2;
                   obj3.display();  
                   break;
            case 3:obj1.input();
                   obj2.input();
                   obj3=obj1*obj2;
                   obj3.display();  
                   break;
            default:cout<<"wrong option"<<endl;
        }
        cout<<"if you want to continue enter 1:";
        cin>>k;
    }while(k==1);
    
    return 0;
}