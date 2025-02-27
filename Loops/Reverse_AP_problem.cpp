#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"enter a num : ";
    cin>>n;

    cout<<"Starting Number : ";
    cin>>a;
    for(int i=1;i<=n; i++){
        cout<<a<<endl;
        a -= 3;
    }
}