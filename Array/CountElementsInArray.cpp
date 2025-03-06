#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    // input
    cout<<"Enter values : ";
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    // input value for count
    cout<<"Enter a value for count : ";
    int x;
    cin>>x;
    
    int count=0;
    for(int i=0;i<=n-1;i++){
            if(arr[i]>x){
                count++;
            }
    }
    cout<<count;
}