#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Given number is even"<<endl;
    }
    // if(n%2!=0){
    //     cout<<"Given number is odd";
    // }
    else{
        cout<<"Given number is odd";
    }
}