#include<iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int arr[m][n];

    // Input matrix
    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    // Method 01: Direct print transpose
    cout << "\nTranspose of matrix (Method 01):\n";
    for(int j = 0; j < n; j++){
        for(int i = 0; i < m; i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Method 02: Store in another matrix and print
    int trr[n][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            trr[j][i] = arr[i][j];
        }
    }

    cout << "\nTranspose of matrix (Method 02):\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << trr[i][j] << " ";
        }
        cout << endl;
    }

    // Method 03: Another way to store transpose
    int t[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            t[i][j] = arr[j][i];
        }
    }

    cout << "\nTranspose of matrix (Method 03):\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
