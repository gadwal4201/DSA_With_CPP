#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter 1st number : ";
    cin>>num1;
    cout<<"Enter 2nd number : ";
    cin>>num2;

    int n = num1;
    num1 = num2;
    num2 = n;

    cout<<num1<<" "<<num2<<endl;
}