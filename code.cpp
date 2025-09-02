#include<iostream>
using namespace std;

int menuList(){
    int c;
    cout<<"0. Exit"<<endl;
    cout<<"1. Add"<<endl;

    cout<<"2. Sub"<<endl;
    cout<<"3. Mul"<<endl;
    cout<<"4. Divide"<<endl;
    cout<<"Enter here: "<<endl;
    cin>>c;
    return c;
}

int main(){
    
    int choice;
    int a=10, b=20;
    switch ((choice == menuList())!=0)
    {
    case 1:
        cout<<a+b<<endl;
        break;

    case 4:
        cout<<a/b<<endl;    
    
    case 2:
        cout<<a-b<<endl;
        break;
    case 3:
        cout<<a*b<<endl;
        break;    
    default:
        break;
    }


    return 0;
}