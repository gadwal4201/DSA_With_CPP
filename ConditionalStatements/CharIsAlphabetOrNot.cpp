#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    int n = int(ch);

    if((n>=97 && n<=122) || (n>=65 && n<=90)){
        cout<<"given character is a alphabet ";
    }
    else{
        cout<<"Not a alphabet";
    }
}