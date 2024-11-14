
#include<iostream>
using namespace std;
template <class T>
void sort(T a[20],int n){
    int i,j;
    
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t" << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                T temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Sorted array is :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t" << endl;
    }
}

int main(){
    int ch,k,n;
    
    do{
        cout<<"1.Integers\n2.Float\n3.Exit\nEnter your Choice:";
        cin>>ch;
        switch(ch){
        case 1:
        {int a[20];
            cout << "Enter the no of array size:";
            cin >> n;
            sort<int>(a,n);
            break;
        }
        case 2:{
        float a[20];
            cout << "Enter the no of array size:";
            cin >> n;
            sort<float>(a, n);
            break;
        }
        case 3:break;
        default:cout<<"wrong choice"<<endl;
        }
        cout<<"If you want to continue enter 1:";
        cin>>k;
    } while (k == 1);
    return 0;
}
