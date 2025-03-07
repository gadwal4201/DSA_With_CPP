#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,5,3,6,9};

    int *ptr = arr; // giving address
    
    // //int *ptr = &arr;  // error
    
    // int *ptr1 = &arr[0];
    
    // //int *ptr = arr[0]; // error
    // cout<<ptr<<endl;

    // cout<<ptr[0];  

    //Types of printing array in different ways
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<i[arr]<<" ";
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<i[ptr]<<" ";
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;
}