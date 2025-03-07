#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5);  // you no need to mention size 
    // inserting / input do not use []

    cout<<"Size of vector is : "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;


    vector<int> v1(5,7);  // capacity is 5 and each element has a value 7
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"Size of vector is : "<<v.size()<<endl;
    cout<<"Capacity of vector is : "<<v.capacity()<<endl;
}