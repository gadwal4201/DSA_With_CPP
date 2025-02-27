#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter selling price : ";
    cin>>sp;

    if(sp>cp){
        int profit=sp-cp;
        cout<<"Profit : "<<profit;
    }
    else{
        int loss=cp-sp;
        cout<<"Loss : "<<loss;
    }
}