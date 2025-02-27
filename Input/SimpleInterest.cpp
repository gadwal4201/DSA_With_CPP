#include<iostream>
using namespace std;
int main(){
    float principle,rate,time;

    cout<<"Enter principle of interset : ";
    cin>>principle;
    cout<<"Enter rate of interset : ";
    cin>>rate;
    cout<<"Enter time of interset : ";
    cin>>time;

    float simple_interset;
    simple_interset = (principle * rate * time)/100;

    cout<<"Simple Interest is : "<<simple_interset;
}