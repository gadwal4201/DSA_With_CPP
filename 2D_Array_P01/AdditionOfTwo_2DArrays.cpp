#include<iostream>
using namespace std;


int main(){
    int m;
    cout<<"Enter no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter 1st matrix elements : ";
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int brr[m][n];
    cout<<"Enter 2nd matrix elements : ";

    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cin>>brr[i][j];
        }
    }
    // 
    int crr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            // crr[i][j] = arr[i][j] + brr[i][j];
            // arr[i][j] += brr[i][j]; 
            brr[i][j] += arr[i][j];

        }
    }
    cout<<"Addition of two matrices is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            // cout<<crr[i][j]<<" ";
            // cout<<arr[i][j]+brr[i][j]<<" ";
            // cout<<arr[i][j]<<" ";
            cout<<brr[i][j]<<" ";
            
        }
        cout<<endl;
    }



}