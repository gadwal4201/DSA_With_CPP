#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> v;

    v.push_back(9);
    v.push_back(1);
    v.push_back(6);
    // v.push_back(15);

    v.at(2) = 90;

    cout<<v.at(1)<<endl;
    cout<<v.at(2)<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end()); //sort the vector

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

}