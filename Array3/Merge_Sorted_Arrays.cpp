#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void input(int s1, vector<int> &arr){
    cout<<"Enter array size : ";
    
    cin>>s1;
    cout<<"Insert sorted array elements : ";
    for(int i=0; i<s1; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
}

void display(vector<int> &v){
    for(int i =0; i<v.size() ; i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

vector<int> merge_2_arr(vector<int> arr1, vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> arr(n1+n2);
    
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]) {
            arr[k] = arr1[i];
            i++;
            
        }
            
        else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    if(i==n1){
        while(j<n2){
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    if(j==n2){
        while(i<n1){
            arr[k] = arr1[i];
            i++;
            k++;
        }
    }

    return arr;
}

int main(){
    vector<int> arr1,arr2,arr3;
    int s;
    input(s,arr1);

    display(arr1);

    input(s,arr2);
    display(arr2);
    
    vector<int> v = merge_2_arr(arr1,arr2);
    display(v);

}