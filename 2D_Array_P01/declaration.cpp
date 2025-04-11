#include<iostream>
using namespace std;
int main(){
    int arr[3][3];

    // rows --> 3   index --> 0 - 2
    // columns --> 3   index --> 0 - 2

    cout<<arr[0][0]<<endl;  // Garbage value print hogi

    arr[0][1] = 4;
    cout<<arr[0][1]<<endl;

    // int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int brr[3][3] = {1,2,3,4,5,6,7,8,9};   // both are same

    int a[][3] = {10,11,12,13,14,15};  // correct
    // int a[2][] = {10,11,12,13,14,15};  // wrong

    // Traversal in 2D array

    for(int i=0; i<3;i++){
        cout<<brr[0][i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<3;i++){
        cout<<brr[1][i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<3;i++){
        cout<<brr[2][i]<<" ";
    }
    cout<<endl;

    // Instead of doing this repeatation use nested loop

    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}