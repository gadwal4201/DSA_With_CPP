#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter no. of rows of 1st Triangle : ";
    cin>>a;
    cout<<"Enter no. of rows of 2nd Triangle : ";
    cin>>b;
    cout<<"Enter no. of rows of 3rd Triangle : ";
    cin>>c;

    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=b;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=c;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}