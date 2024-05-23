#include<iostream>
using namespace std;
int main(){
    int a,b;
    char option;
    char c;
    start:
    
    cout<<"enter number 1"<<endl;
    cin>>a;
    cout<<"enter number 2"<<endl;
    cin>>b;
    cout<<"which operation you want '+','-','*','/'"<<endl;
    cin>>c;
    switch(c){
        
        case '+':
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        break;
        case '-':
        cout<<a<<"-"<<b<<"="<<a+b<<endl;
        break;
        case '*':
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        break;
        case '/':
        cout<<a<<"/"<<b<<"="<<a+b<<endl;
        break;
        default:
        cout<<"invalid operation"<<endl;
    }
    cout<<"Do you want to continue the operation(Y/N)"<<endl;
    cin>>option;
    if(option=='y'||option=='Y'){
        goto start;
    }
    else
    cout<<"Thankyou !";
    return 0;
}


