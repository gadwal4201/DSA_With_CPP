#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;  // you no need to mention size 
    // inserting / input do not use []

    v.push_back(6);
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<"Size is : "<<v.size()<<endl;
    v.push_back(1);
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<"Size is : "<<v.size()<<endl;
    v.push_back(9);
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<"Size is : "<<v.size()<<endl;
    v.push_back(10);
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<"Size is : "<<v.size()<<endl;

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    
}