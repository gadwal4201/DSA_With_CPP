#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int a = n;
    int sum = 0;
    while(n!=0){
        
        sum = sum + n%10;
        n=n/10;
    }

    if(a==0) cout<<0<<" is sum of given number digits";
    else cout<<sum<<" is sum of given number digits";


}