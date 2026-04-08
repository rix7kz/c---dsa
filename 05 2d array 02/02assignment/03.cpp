// Write a program to print the matrix in wave form.
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

        for (int j=0;j<m;j++){
           if(j%2==0){
                for(int i=n-1;i>=0;i--){
                 cout<<a[i][j]<<" ";
                }
            }
            else{
                for(int i=0;i<n;i++){
                    cout<<a[i][j]<<" ";
                }
            }
            cout<<endl;
        }
        
       
    
}