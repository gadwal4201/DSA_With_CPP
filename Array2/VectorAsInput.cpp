#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter vector size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"th "<<"element : ";
        // cin>>v[i]; // this is wrong in vectors 
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}