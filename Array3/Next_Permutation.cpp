#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>

void input(vector<int> &arr){
    int s1;
    cout<<"Enter array size : ";
    
    cin>>s1;
    cout<<"Insert array elements : ";
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

void reverse_array(vector<int> &v, int i, int j){
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void nextPermutation(vector<int> &nums){
    int n = nums.size();
    // 1).finding pivot index
    int idx = -1;
    for(int i= n-2; i>=0; i--){
        if(nums[i] < nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx==-1){
        reverse_array(nums,0,n-1);
        // reverse(nums.begin()+i,nums.end()+j+1); // #include<algorithm>
        return;
    }
    // 2). Sorting/reverse after pivot
    reverse(nums.begin()+idx + 1, nums.end());

    // 3). finding just greater element than idx
    int j = -1;
    for(int i=idx+1; i<n; i++){
        if(nums[i]>nums[idx]){
            j = i;
            break;
        }
    }

    // 4). Swap idx and j

    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;

    return;
}

int main(){
    vector<int> v;
    
    input(v);

    display(v);
    nextPermutation(v);
    display(v);


}