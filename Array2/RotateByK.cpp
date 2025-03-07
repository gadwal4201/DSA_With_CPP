#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &m){
    for(int i=0;i<m.size();i++){
        cout<<m.at(i)<<" ";
    }
}


void reversepart(int i,int j, vector<int> &v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
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
    cout<<"Enter rotate steps : ";
    int k;
    cin>>k;

    int s = v.size();

    if(k>s) k=k%s;

    reversepart(0,s-k-1,v);
    display(v);
    cout<<endl;

    reversepart(s-k,s-1,v);
    display(v);
    cout<<endl;

    reversepart(0,s-1,v);

    display(v);
}