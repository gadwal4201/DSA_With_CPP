#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>a){
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}

void swap(int x, int y, vector<int> &v){
    int temp = v[x];
    v[x] = v[y];
    v[y] = temp;
}

void sort012(vector<int> &v){
    int noZ = 0, noO = 0, noT = 0;
    for(int i=0; i<v.size(); i++){
        if(v.at(i)==0) noZ++;
        else if(v.at(i)==1) noO++;
        else noT++;
    }

    cout<<"No. of zeros : "<<noZ<<endl;
    cout<<"No. of ones : "<<noO<<endl;
    cout<<"No. of twos : "<<noT<<endl;

    for(int i=0; i<v.size(); i++){
            if(i<noZ) v.at(i) = 0;
            else if(i<noZ+noO) v.at(i) = 1;
            else v[i] = 2;
        }

    
}

void sort012_M2(vector<int> &v){
    int low=0,mid=0, high = v.size()-1;

    while(mid <= high){
        if(v[mid]==2){
            swap(mid,high);
            high--;
        }

        else if(v[mid]==0){
            swap(mid,low);
            low++;
            mid++;
        }

        else mid++;
    }
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int> v;
    cout<<"Enter 0, 1, 2 in array : ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<endl;

    display(v);
    // sort(v.begin(),v.end());
    cout<<"Method 01"<<endl;
    sort012(v);
    display(v);
    cout<<"Method 02"<<endl;

    sort012_M2(v);
    display(v);
}