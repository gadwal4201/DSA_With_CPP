#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter total number of students : ";
    cin>>n;
    int marks[n];
    // input
    cout<<"Enter marks : ";
    for(int i = 0;i<=n-1;i++){
        cin>>marks[i];
    }
    // output
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<"Roll number which have less than 35 marks : "<<i<<endl;
        }
    }
}