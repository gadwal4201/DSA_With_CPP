#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
// #include<math.h>

void input(int s1, vector<int> &arr){
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

int trap_M01(vector<int> &height){
    int n = height.size();
    // previous greatest element array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i=1; i<n; i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    // next greatest element array

    int next[n];
    next[n-1] = -1;
    max = height[n-1];
    for(int i=n-2; i>=0; i--){
        next[i] = max;
        if(max<height[i]) max = height[i];
    }
    // minimum from prev and next
    int mini[n];
    for(int i=0;i<n;i++){
        mini[i] = min(prev[i],next[i]);
    }
    // calculating water volume
    int water = 0;
    for(int i=0;i<n-1;i++){
        if(height[i]<mini[i]){
            water += (mini[i]-height[i]);
        }
    }
    cout<<"Water units from method 01 is : ";
    return water ;
}
int trap_M02(vector<int> &height){
    int n = height.size();
    // previous greatest element array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i=1; i<n; i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    // next greatest element array

    int next[n];
    next[n-1] = -1;
    max = height[n-1];
    for(int i=n-2; i>=0; i--){
        next[i] = max;
        if(max<height[i]) max = height[i];
    }
    // minimum array --> prev as minimum

    for(int i=0;i<n;i++){
        prev[i] = min(prev[i],next[i]);
    }
    // calculating water volume
    int water = 0;
    for(int i=0;i<n-1;i++){
        if(height[i]<prev[i]){
            water += (prev[i]-height[i]);
        }
    }
    cout<<"Water units from method 02 is : ";

    return water ;
}
int trap_M03(vector<int> &height){
    int n = height.size();
    // previous greatest element array
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i=1; i<n; i++){
        prev[i] = max;
        if(max<height[i]) max = height[i];
    }
    // next greatest element array --> prev as next

    prev[n-1] = -1;
    max = height[n-1];
    for(int i=n-2; i>=0; i--){
        if(max<prev[i]) prev[i] = max;
        if(max<height[i]) max = height[i];
    }

    // calculating water volume
    int water = 0;
    for(int i=0;i<n-1;i++){
        if(height[i]<prev[i]){
            water += (prev[i]-height[i]);
        }
    }
    cout<<"Water units from method 03 is : ";

    return water ;
}

int main(){
    vector<int> v;
    int s;
    input(s,v);

    trap_M01(v);
    cout<<endl;
    trap_M02(v);
    cout<<endl;
    trap_M03(v);

}