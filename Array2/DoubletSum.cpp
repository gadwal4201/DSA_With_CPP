#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target : ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter vector/array size : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<"th element : ";
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    cout<<endl;
    for(int i=0;i<=v.size()-2;i++){
        int num1 = v[i];
        for(int j=i+1;j<=v.size()-1;j++){
            int num2 = v[j];
            if(num1+num2 == x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
            // else cout<<"No doublets";
        }
    }
}