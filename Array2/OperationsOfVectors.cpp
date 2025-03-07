#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;  // you no need to mention size 
    // inserting / input do not use []

    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);

    cout<<"Size of vector is : "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    
    cout<<"Size of vector is : "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;

    
}