#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a=5,b=10;
    int* x = &a;
    int* y = &b;
    swap(x,y);
    cout<<a<<" "<<b;
}