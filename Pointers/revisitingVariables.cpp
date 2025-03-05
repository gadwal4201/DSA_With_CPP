#include<iostream>
using namespace std;
int main(){
    // cout<<sizeof(int)<<endl;
    // cout<<sizeof(bool)<<endl;
    // cout<<sizeof(float)<<endl;
    // cout<<sizeof(double)<<endl;
    // cout<<sizeof(long )<<endl;
    // cout<<sizeof(long long)<<endl;
    // cout<<sizeof(char)<<endl;

    int x=5;
    // cout<<&x;  // 0x61ff0c
    int *p = &x;

    cout<<&x<<endl;    // 0x61ff08
    cout<<p<<endl;      // 0x61ff08   both are same
}