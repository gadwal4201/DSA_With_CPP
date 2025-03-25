#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}

void sort012(vector<int> &v){
    
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int> v;
    cout<<"Enter 0, 1, 2 in array : ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<endl;

    display(v);
    // sort(v.begin(),v.end());

    sort012(v);
    display(v);
}