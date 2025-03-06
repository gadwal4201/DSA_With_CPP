#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    // input
    cout<<"Enter marks : ";
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    // output
    int sum = 0;
    for(int i=0;i<=n-1;i++){
        sum += arr[i];
    }
    cout<<"Sum of array is : "<<sum;
}