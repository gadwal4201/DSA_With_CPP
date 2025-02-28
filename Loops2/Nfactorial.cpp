// 5! = 5 * 4 * 3 * 2 * 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
        cout<<fact<<endl;
    }
}