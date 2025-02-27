#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a integer : ";
    int n;
    cin>>n;
    if(n>=0){
        cout<<"Absolute value of "<<n<<" is "<<n;
    }
    else{
        
        cout<<"Absolute value of "<<n;
        n=-n;
        cout<<" is "<<n;
    }
}