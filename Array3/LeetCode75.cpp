#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<=a.size()-1;i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}

void sort01(vector<int> &v){
        int noZ =0,noO = 0,noT=0;
        for(int i=0;i<=v.size()-1;i++){
            if(v.at(i)==0) noZ++;
            else if(v.at(i)==1) noO++;
            else noT++;
        }
        cout<<"No of Zero's : "<<noZ<<endl;
        cout<<"No of One's : "<<noO<<endl;
        cout<<"No of Two's : "<<noT<<endl;

        for(int i = 0;i<=noZ-1;i++){
            v.at(i) = 0;
        }
        for(int i = noZ;i<=noZ + noO -1;i++){
            v.at(i) = 1;
        }for(int i = noZ+noO;i<=v.size()-1;i++){
            v.at(i) = 2;
        }

        // for(int i=0;i<=v.size()-1;i++){
        //     if(i<=noZ-1) v[i] = 0;
        //     else v[i] = 1;
        // }
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int> v;
    cout<<"Enter 0's and 1's in array : ";
    for(int i = 0;i<=n-1;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<endl;

    display(v);

    sort01(v);
    display(v);

}