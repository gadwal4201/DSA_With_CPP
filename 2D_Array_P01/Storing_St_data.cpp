#include<iostream>
using namespace std;
int main(){
    int m=2;
    int n=4;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // print
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}