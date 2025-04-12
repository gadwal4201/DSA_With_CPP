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
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    // Method 01
    cout<<"transpose of matrix : "<<endl;
    for(int j=0;j<n;j++){
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Method 02
    int trr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            trr[j][i] = arr[i][j];

        }
        cout<<endl;
    }
    // print Method 02 transpose
    for(int j=0;j<n;j++){
        for(int i=0; i<m; i++){
            cout<<trr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}