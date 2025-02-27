#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter 3 numbers : ";
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is greatest";
        }
        else{  // num1<num3,  and num1>num2  --> num3>num1>num2
            cout<<num3<<" is greatest";
        }
    }
    else if(num2>num1){
        if(num2>num3){
            cout<<num2<<" is greatest";
        }
        else{
            cout<<num3<<" is greatest";
        }
    }
    else{
        cout<<"Numbers are equal";
    }
}