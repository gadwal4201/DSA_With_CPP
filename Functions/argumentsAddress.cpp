#include<iostream>
using namespace std;

void fun(int x,int y){
    cout<<"Address of fun x : "<<&x<<endl;
    cout<<"Address of fun y : "<<&y<<endl;
    
}
int main(){
    int x,y;
    x=3;
    y=7;
    cout<<"Address of main x : "<<&x<<endl;
    cout<<"Address of main y : "<<&y<<endl;
    fun(x,y);
}