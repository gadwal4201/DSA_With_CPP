#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}

int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;

    // int n_fact = 1; // n!
    // for(int i=2;i<=n;i++){
    //     n_fact *= i;
    // }
    
    // int r_fact = 1; // r!
    // for(int i=2;i<=r;i++){
    //     r_fact *= i;
    // }
    
    // int nr_fact = 1; // (n-r)!
    // for(int i=2;i<=n-r;i++){
    //     nr_fact *= i;
    // }

    // int n_fact = fact(n);
    // int r_fact = fact(r);
    // int nr_fact = fact(n-r);

    // int ncr = n_fact/(r_fact*nr_fact);
    // int ncr = combination(n,r);
    // cout<<ncr<<endl;

    cout<<combination(n,r);
}