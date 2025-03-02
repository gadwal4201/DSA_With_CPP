#include<iostream>
using namespace std;
int main(){
    // int a,b,c;
    // cout<<"Enter no. of rows of 1st Triangle : ";
    // cin>>a;
    // cout<<"Enter no. of rows of 2nd Triangle : ";
    // cin>>b;
    // cout<<"Enter no. of rows of 3rd Triangle : ";
    // cin>>c;
    int a;
    for(int k=1;k<=3;k++){
        cout<<"Enter no. of rows : ";
        cin>>a;
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    
    
}