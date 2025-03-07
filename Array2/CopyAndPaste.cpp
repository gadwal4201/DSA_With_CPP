#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }

}
int main(){

    vector<int> v;
    int n;
    cout<<"Enter vector/array size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"th element : ";
        int a;
        cin>>a;
        v.push_back(a);
    }
    display(v);

    cout<<endl;

    // vector<int> u;
    // for(int i=v.size()-1;i>=0;i--){
    //     u.push_back(v[i]);
    // }

    vector<int> u(v.size());
    for(int i = 0;i<=v.size()-1;i++){
        u[i] = v[v.size()-1-i];
    }

    display(u);
}