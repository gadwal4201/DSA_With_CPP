#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &m){
    for(int i=0;i<=m.size()-1;i++){
        cout<<m.at(i)<<" ";
    }
}
void reversepart(int n1,int n2,vector<int> &v){
    while(n1<=n2){
        int temp = v[n1];
        v[n1] = v[n2];
        v[n2] = temp;
        n1++;
        n2--;
    }
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int> nums;
    for(int i=0;i<=n-1;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }

    int k;
    cout<<"Enter rotate steps : ";
    cin>>k;

    int s = nums.size();
    reversepart(0,s-k-1,nums);
    reversepart(s-k,s-1,nums);
    reversepart(0,s-1,nums);

    display(nums);
}