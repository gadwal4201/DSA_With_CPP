#include<iostream>
using namespace std;
int main(){
    // int x,y;
    // cout<<"Enter 2 nums for addition : ";
    // cin>>x>>y;

    // int *px = &x;
    // int *py = &y;

    // int sum = *px + *py;
    // cout<<sum<<endl;

    int x,y;
    int *px = &x, *py = &y;
    cout<<"Enter 2 nums : ";
    cin>>*px>>*py;

    cout<<*px + *py;
}