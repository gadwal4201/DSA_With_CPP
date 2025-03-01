#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows : ";
    cin>>n;
    // cout<<"Enter no. of columns : ";
    // cin>>m

    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){   // j<= n+1-i   for reverse print
                cout<<j;
            }
            cout<<endl;
    
    }

}