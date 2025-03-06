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
    // input value for search
    cout<<"Enter a value for search : ";
    int x;
    cin>>x;

    // linear search
    // for(int i=0;i<=n-1;i++){
    //     if(x==arr[i]){
    //         cout<<"Element found";
    //         break;
    //     }
    //     else {
    //         cout<<"Element not found";
    //         break;
    //     }
    // }

    bool flag = false ;// false means element not present in array
    for(int i=0;i<=n-1;i++){
            if(x==arr[i]){
                flag = true;
            }
    }
    if(flag==true) cout<<"Element found";
    else cout<<"Element not found";
}