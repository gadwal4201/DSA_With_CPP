#include<iostream>
#include<vector>
using namespace std;

void change(vector<int> &a){
    a[0] =1000;
    
}
int main(){
    vector<int> v;

    v.push_back(9);
    v.push_back(1);
    v.push_back(6);
    v.push_back(15);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;


    change(v);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

}