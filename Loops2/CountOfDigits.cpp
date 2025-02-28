#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int count = 0;
    int a=n;
    while(n!=0){
    n=n/10;
    count += 1;
}
    if(a==0) cout<<1<<" digit in given number";
    else
    cout<<count<<" digit in given number";
}