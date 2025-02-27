#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char ch;
    
    cout<<"Enter Operands with operator (+,-,*,/,%,**,//) : ";
    cin>>num1>>ch>>num2;

    switch(ch){
        case '+' :
            cout<<num1+num2;
            break;
        case '-' :
            cout<<num1-num2;
            break;
        case '*' :
            cout<<num1*num2;
            break;
        case '/' :
            cout<<num1/num2;
            break;
        case '%' :
            cout<<num1%num2;
            break;
        
        default:cout<<"Invalid";
    }
}