#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter rows and columns: ";
    cin>>m;

    int arr[m][m];

    // input
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // Row-wise print
    cout << "\nOriginal Matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

        int t[m][m];
   
    //colum-wise
    for(int j=0;j<m;j++){
        for(int i=0;i<m;i++){
            t[j][i]=arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<m;i++){
        for (int j=0;j<m;j++){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=m;i>=0;i--){
        for (int j=m;j>=0;j--){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
   
} 