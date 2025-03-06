#include<iostream>
using namespace std;
int main(){
    int arr[] = {156,4,68,55,65,2,55,652};
    int n = sizeof(arr)/sizeof(arr[5]);  // sizeof(arr)/4; -->because we know that int size is 4;
    cout<<"Size of array is : "<<n;
}