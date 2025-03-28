#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<=a.size()-1;i++){
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}
void swap(int x,int y, vector<int> &v){
    int temp = v[x];
    v[x] = v[y];
    v[y] = temp;
}

void sort01(vector<int> &v){
        int i=0, j=v.size()-1;
        while(i<j){
            if(v.at(j)==1) j--;
            if(v.at(i)==0) i++;
            if(i>j) break;
            if(v.at(i)==1 && v.at(j)==0){
                // swap(v.at(i),v.at(j),v);
                v.at(i) = 0;
                v.at(j) = 1;
                i++;
                j--;
            }
        }
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