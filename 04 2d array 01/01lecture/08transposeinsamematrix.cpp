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

   
    int temp=0;
    for(int i=0;i<m;i++){
        for (int j=i+1;j<m;j++){
            if (i<j) temp= arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<endl;

    for(int i=0;i<m;i++){
        for (int j=0;j<m;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
} 