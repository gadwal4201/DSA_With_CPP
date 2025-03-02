#include<iostream>
#include<cmath>
using namespace std;

int sum(int x,int y){
    return x+y;
}
int main(){
    int x,y;
    cout<<"Enter numbers : ";
    cin>>x>>y;
    // if(x<y) cout<<x;
    // else cout<<y;
    cout<<min(x,y)<<endl;
    cout<<max(x,y)<<endl;
    cout<<sqrt(7)<<endl;
}