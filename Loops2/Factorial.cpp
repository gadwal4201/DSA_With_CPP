// 5! = 5 * 4 * 3 * 2 * 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int a = n;

    int fact = 1;
    int i=1;
    while(i<=n){

        fact = fact * i;
        i++;
    }
    if(a==0) cout<<1;
    else
    cout<<fact;
}