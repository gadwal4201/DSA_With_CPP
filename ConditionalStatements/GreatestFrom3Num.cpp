#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter 3 numbers to check which is greatest : ";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3){
        cout<<"Number 1 is greatest "<<num1;
    }
    
    if(num2>num1 && num2>num3){
        cout<<"Number 2 is greatest "<<num2;
    }
    
    if(num3>num2 && num3>num1){
        cout<<"Number 3 is greatest "<<num3;
    }

    
}