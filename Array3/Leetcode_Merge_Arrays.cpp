#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;

    vector<int> arr1(m+n),arr2(n);

    cout<<"Enter 1st array size : ";
    cin>>m;
    cout<<"Enter 1st array elements : ";
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        arr1.push_back(a);
    }
    cout<<"Enter 2nd array size : ";
    cin>>n;
    cout<<"Enter 2nd array elements : ";

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr2.push_back(a);
    }

    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

}