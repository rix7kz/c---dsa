#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter no of 1 rows: ";
    cin>>m;
    int n;
    cout<<"enter no of 1 columns: ";
    cin>>n;
    
    
        int a[m][n];
       
        cout<<"enter the elements of thee first matrices: "<<endl;
        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        for (int i=0;i=1;i++){
            for (int j=0;j=1;i++){
                cout<<a[i][j]<<" ";
            }
           
        }
        
       
    
}