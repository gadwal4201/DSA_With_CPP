#include<iostream>
#include<climits>

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
    // print
    int max = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"Maximum in 2D Array is : "<<max<<endl;

    int smax = arr[0][0];
    // int smax = INT_MIN; 
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            if(smax<arr[i][j] && arr[i][j]!=max) smax=arr[i][j];
            
        }
    }
    cout<<"Second Maximum in 2D Array is : "<<smax<<endl;
}