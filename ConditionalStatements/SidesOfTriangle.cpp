#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter 3 numbers : ";
    cin>>side1>>side2>>side3;

    if((side1+side2>side3) && (side1+side3>side2) && (side3+side2>side1) ){
        cout<<"Triangle is possible";
    }
    else{
        cout<<"triangle is not possible";
    }
    

}