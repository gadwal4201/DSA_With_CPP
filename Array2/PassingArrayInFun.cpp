#include<iostream>
using namespace std;

void display(int a[],int size){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void change(int b[],int size){
    b[0] = 100;
}

int main(){
    int arr[5] = {1,4,2,7,46};
    int size = sizeof(arr)/sizeof(arr[0]);
    // accessing the elements of array in another function
    // updation, pass by value / reference

    display(arr,size);
    change(arr,size);
    display(arr,size);   // usually array ke sath size bhi bhejte hai
    
}