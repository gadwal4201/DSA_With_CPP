#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter row number : ";
    cin>>n;
    cout<<"Enter column number : ";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}