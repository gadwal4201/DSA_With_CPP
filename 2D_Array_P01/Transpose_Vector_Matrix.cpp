#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> v){
    int m = v.size();
    int n =v[0].size();
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

void input_matrix(vector<vector<int>> &v){
    int m;
    cout<<"Enter no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns : ";
    cin>>n;

    // Resize vector to m x n
    v.resize(m, vector<int>(n));
    cout<<"Enter matrix elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
    return;
}

vector<vector<int>> transpose(vector<vector<int>> &v){
    int m = v.size();
    int n =v[0].size();

    vector<vector<int>> t(n,vector<int>(m));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            t[j][i] = v[i][j];
        }
    }
    
    cout<<"Transpose of matrix is : "<<endl;
    return t;
}
int main(){
    vector<vector<int>> v;
    input_matrix(v);
    cout<<"Original matrix"<<endl;
    display(v);
    transpose(v);
    // display(v);

    display(transpose(v));

    
}