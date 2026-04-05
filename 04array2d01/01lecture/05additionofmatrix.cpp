#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter the no of the rows: ";
    cin>>m;
    int n;
    cout<<"enter the no of the column: ";
    cin>>n;
    int arr[m][n];
    //input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int arr2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         cin>>arr2[i][j];
             
        }   
    }
    int res[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        res[i][j]= arr[i][j]+arr2[i][j];
       
        }   
        cout<<endl;
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" "; 
       
        }   
        cout<<endl;


}
}