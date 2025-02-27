#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for table : ";
    cin>>n;

    // for(int i=1; i<=10; i++){
    //     cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    // }

    // for(int i=n; i<=10*n; i+=n){
    //     cout<<i<<endl;
    // }

    for(int i=n;i<=10*n;i++){
        if(i%n==0){
            cout<<i<<endl;
        }
    }
}