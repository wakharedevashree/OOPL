#include<iostream>
using namespace std;
class Book{
    public:
    string name,author,publication;
    float price;
    int stock;
    public:
    Book(){
      string *name=new string;
      string *author=new string;
      string *publication=new string;
      float *price=new float;
      int *stock=new int;

    }
    
    
    void accept(int x){
        cout<<"Details of Book "<<x+1<<" :"<<endl;
        cout<<"Enter the Book Name:";
        cin>>name;
        cout<<"Enter the Book Author:";
        cin>>author;
        cout<<"Enter the Book Publication:";
        cin>>publication;
        cout<<"Enter the Book price:";
        cin>>price;
        cout<<"Enter the Stock Book :";
        cin>>stock;
    }

    void display(){
        cout<<name<<"\t"<<author<<"\t"<<publication<<"\t"<<price<<"\t"<<stock<<"\t"<<endl;
    }
    
    void searching(Book b[],int n){
    string user_name,user_author;
    int i,flag=0,user_stock;
    cout<<"Enter name of Book you want to search:";
    cin>>user_name;
    cout<<"Enter name of author you want to search:";
    cin>>user_author;
    for(i=0;i<n;i++){
         if(b[i].name==user_name && b[i].author==user_author){
              flag=1;
            cout<<"Books are availabel"<<endl;
            cout<<"Book Name: "<<b[i].name<<endl;
            cout<<"Book Author: "<<b[i].author<<endl;
            cout<<"Book publiation: "<<b[i].publication<<endl;
            cout<<"Book price: "<<b[i].price<<endl;
            cout<<"Book Stock: "<<b[i].stock<<endl;
            cout<<"Enter how many Book required:";
            cin>>user_stock;
            if(b[i].stock>user_stock){
               
                cout<<"Your Total price is : "<<user_stock*b[i].price<<endl;
                 b[i].stock-=user_stock;
            }
            else{
                cout<<"required Books are not availabel"<<endl;
            }
              flag=1;
              break;
         }
    }
          if(flag==0){
            cout<<"Book is not Found"<<endl;
          }
           
    }
    

};

int main(){
    Book b[20];
    int i,n=0,temp,k,ch;
    do{
      cout<<"Menu\n1.Accept Details\n2.Display Details\n3.Searching\n4.Exit\nEnter your Choice:";
    cin>>ch;
      switch(ch){
        case 1:cout<<"Enter the no of Books:";
            cin>>temp;
            for(i=n;i<n+temp;i++){
              b[i].accept(i);
            }
            n=n+temp;
            break;
        case 2:cout<<"Name\tAuthor\tPublication\tPrice\tStock\t"<<endl;
               for(i=0;i<n;i++){
               b[i].display();
               }
               break;
        case 3:
               b[i].searching(b,n);
               
               break;
        case 4:break;
        default:cout<<"Wrong Choice"<<endl;
      }
      cout<<"if you want to continue Enter 1 :";
      cin>>k;

    }while(k==1);
    return 0;
}