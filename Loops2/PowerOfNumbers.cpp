

#include<iostream>
using namespace std;
int main(){
    int base,power;
    cout<<"Enter the base  : ";
    cin>>base;
    cout<<"Enter the power  : ";
    cin>>power;

    bool flag = true;  // positive power
    if(power<0){
        flag = false ; // negative power
        power = -1 * power;
    }

    float final = 1;
    for(int i=1;i<=power;i++){
        
        final = final * base;
    }

    if(flag==false){
        final = 1 / final;
        power = -power;
    }
    if(base==0 && power==0) cout<<"Not defined";
    else 
    cout<<base<<" raised to the power "<<power<<" is "<<final<<endl;


}