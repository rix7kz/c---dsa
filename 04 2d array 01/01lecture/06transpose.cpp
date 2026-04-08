#include<iostream>
using namespace std;

int main(){
    int m, n;
    cout<<"enter rows and columns: ";
    cin>>m>>n;

    int arr[m][n];

    // input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // Row-wise print
    cout << "\nOriginal Matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Column-wise print (Transpose)
    cout << "\nColumn-wise (Transpose):\n";
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}