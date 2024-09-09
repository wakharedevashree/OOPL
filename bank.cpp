
#include <iostream>
using namespace std;

class Bank{
    public:
    string name;
    int acount_no,dep,wd;
    float balance;
    
    public:
    void get_values(){
        cout<<"Enter the Name of Acount Holder:";
        cin>>name;
        cout<<"Enter the Account no:";
        cin>>acount_no;
        cout<<"Enter the Bank balance:";
        cin>>balance;
    }
    void deposit(){
        cout<<"Enter the value of Deposit Amount:";
        cin>>dep;
        balance=balance+dep;
        cout<<"Depositeed Amount is:"<<dep<<endl;
        cout<<"After deposite,the bank balance is"<<balance<<endl;
    }
    void withdraw(){
        cout<<"Enter the value of withdrawal Amount:";
        cin>>wd;
        if(balance<0 || balance<wd){
            cout<<"you can not withdraw any amount"<<endl;
        }
        else{
             balance=balance-wd;
             cout<<"withdrawal Amount is:"<<wd<<endl;
             cout<<"After withdrawal amount,the bank balance is"<<balance<<endl;
        }
    }
    
    void display(){
       
       cout<<name<<"\t"<<acount_no<<"\t"<<balance<<"\t"<<endl;
       
       
        
        
    }
};

int main(){
    Bank b[20];
    int ch,k,n,pos,flag=0,temp,i;
    cout<<"Enter no of account holders:";
    cin>>n;
    do{
        cout<<"1.Get Values\n2.Deposite Amount\n3.Withdrawal Amount\n4.Display\nEnter Your Choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1:for(i=0;i<n;i++){
                   b[i].get_values();
            }
                   break;
            case 2:cout<<"Enter account no:";
                   cin>>temp;
                   for(i=0;i<n;i++){
                       if(temp==b[i].acount_no){
                           pos=i;
                           flag=1;
                           break;
                       }
                   }
                   if(flag==1){
                       b[pos].deposit();
                   }
                   else{
                       cout<<"Not Found"<<endl;
                   }
                   flag=0;
                   break;
            case 3:cout<<"Enter account no:";
                   cin>>temp;
                   for(i=0;i<n;i++){
                       if(temp==b[i].acount_no){
                           pos=i;
                           flag=1;
                           break;
                       }
                   }
                   if(flag==1){
                       b[pos].withdraw();
                   }
                   else{
                       cout<<"Not Found"<<endl;
                   }
                   flag=0;
                   break;
            case 4:  cout<<"Name\t"<<"Account no\t"<<"Balance"<<endl;
                     for(i=0;i<n;i++){
                     b[i].display();
            }
                   break;
            default:cout<<"Wrong Choice"<<endl;
        }
        cout<<"If you want to continue press 1:";
        cin>>k;
    }while(k==1);
    return 0;
}