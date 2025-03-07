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

void reverse(vector<int> &v){
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        // swap v[i] and v[j]
        swap(v[i],v[j]);
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

    reverse(v);
    display(v);


}