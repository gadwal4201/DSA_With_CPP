#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a integer : ";
    int n;
    cin>>n;

    if(n>=100 && n<=999)
    {
        cout<<"Number is 3 digit";
    }
    else
    cout<<"Number is not 3 digit";
}