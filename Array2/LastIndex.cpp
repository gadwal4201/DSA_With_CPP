#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"th element : ";
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Enter a number for check last index : ";
    int x;
    cin>>x;
    int idx = -1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx = i;
    // }

    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx;

    
}