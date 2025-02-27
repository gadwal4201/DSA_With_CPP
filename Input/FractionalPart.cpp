// take float input and print the fractional part of the number.

#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter a number : ";
    cin>>num;

    int int_partof_num = int(num);
    if (int_partof_num<0) int_partof_num -=1;

    float end = float(int_partof_num);

    num -= end;


    cout<<num;

}