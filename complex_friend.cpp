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
}