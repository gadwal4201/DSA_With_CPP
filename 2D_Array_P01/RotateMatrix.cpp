#include<iostream>
#include<vector>
using namespace std;

void display_matrix(vector<vector<int>> v){
    int m = v.size();
    int n =v[0].size();
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

void input_matrix(vector<vector<int>> &v,int n){


    // Resize vector to m x n
    v.resize(n, vector<int>(n));
    cout<<"Enter matrix elements : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    return;
}

vector<vector<int>> transpose_matrix(vector<vector<int>> &v){
    int m = v.size();
    int n =v[0].size();

    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
    cout<<"Transpose of matrix is : "<<endl;
    return v;
}

vector<vector<int>> reverse_matrix(vector<vector<int>> &v){
    // int m = v.size();
    int n =v[0].size();

    for(int k=0;k<n;k++){
        int i=0, j=n-1;
        while(i<j){ // swpping k,i and j
            int temp = v[k][i];
            v[k][i] = v[k][j];
            v[k][j] = temp;
            i++;
            j--;
        }
    }
    cout<<"Reverse of transpose matrix"<<endl;
    return v;
}

int main(){
    int n;
    cout<<"Enter square matrix size : ";
    cin>>n;
    
    vector<vector<int>> v;
    input_matrix(v,n); 

    cout<<"Original Matrix"<<endl;
    display_matrix(v);
    
    transpose_matrix(v);
    display_matrix(v);

    reverse_matrix(v);
    display_matrix(v);
    
}