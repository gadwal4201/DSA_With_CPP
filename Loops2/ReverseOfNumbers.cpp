#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int a=n;

    // while(n!=0){
    //     int rem;
    //     rem = n%10;
    //     n = n / 10;
    //     cout<<rem;
    // }

    // if(a==0) cout<<"Reverse is "<<0;

    int lastdigit = 0, reverse = 0;

    while(n!=0){
        reverse = reverse * 10;
        lastdigit = n%10;
        reverse = reverse + lastdigit;
        n = n / 10;
    }

    if(a==0) cout<<"Reverse is "<<0;
    else cout<<reverse;


}