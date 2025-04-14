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

void input_matrix(vector<vector<int>> &v,int m,int n){
    v.resize(m,vector<int>(n));

    cout<<"Enter matrix elements : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            cin>>v[i][j];
        }
    }
}

vector<vector<int>> transpose(vector<vector<int>> &v){
    int m = v.size();
    int n =v[0].size();

    vector<vector<int>> t(n,vector<int>(m));
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            t[i][j] = v[j][i];
        }
    }
    
    cout<<"Transpose of matrix is : "<<endl;
    return t;
}
int main(){
    int m;
    cout<<"Enter no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter no. of columns : ";
    cin>>n;
    vector<vector<int>> v;
    input_matrix(v,m,n);
    cout<<"Original matrix"<<endl;
    display(v);

    vector<vector<int>> transpose_matrix =  transpose(v);
    display(transpose_matrix);
    // display(transpose(v));

    
}