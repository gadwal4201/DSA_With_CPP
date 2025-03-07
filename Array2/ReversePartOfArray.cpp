#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &m){
    for(int i=0;i<m.size();i++){
        cout<<m.at(i)<<" ";
    }
}
void swap(int &n1,int &n2){
    // swap v[i] and v[j]
        int temp = n1;
        n1 = n2;
        n2 = temp;
    return;
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

    reversepart(1,3,v);

    display(v);
}