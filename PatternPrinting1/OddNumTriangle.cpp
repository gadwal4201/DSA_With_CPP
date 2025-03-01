#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no. of rows : ";
    cin>>n;
    // cout<<"Enter no. of columns : ";
    // cin>>m

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=2*i-1;j=j+2){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a;
            a += 2;
        }
        cout<<endl;
    }

}