// 1 -2 + 3 - 4 + 5 - 6 .......... n

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int sum = 0;

    // int i=1;
    // while(i<=n){
    //     if(i%2 !=0)
    //     sum = sum + i;
    //     else
    //     sum = sum - i;
    //     i++;
        
    // }
    // cout<<sum;


    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n;
    cout<<sum;
}