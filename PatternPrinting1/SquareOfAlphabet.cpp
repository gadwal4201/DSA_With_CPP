#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int a=97;
        for(int j=1;j<=n+1-i;j++){
            cout<<char(a)<<" ";
            a++;
        }
        cout<<endl;
    }

}