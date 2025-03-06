#include<iostream>
#include<climits>
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
    int max = arr[0];
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<"Max element in array is : "<<max<<endl;

    int smax = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && smax<arr[i]) smax = arr[i];
    }
    cout<<"Second Max is : "<<smax<<endl;

    
}