#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    int m=n-1;

    for(int x=1;x<=2*n-1;x++){
        cout<<x;
    }
    cout<<endl;

    for(int i=1;i<=m;i++){
        int a=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            a++;
        }
        
        for(int l=1;l<=m+1-i;l++){
            cout<<a;
            a++;
        }
        
        cout<<endl;
        
        }
        
    
    }
