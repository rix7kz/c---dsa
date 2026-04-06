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

        for (int i=m-1;i>=0;i--){
           if(i%2==0){
                for(int j=0;j<n;j++){
                 cout<<a[i][j]<<" ";
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    cout<<a[i][j]<<" ";
                }
            }
            cout<<endl;
        }
        
       
    
}