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
 int max =INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max = arr[i][j];
             
        }
        
       
        cout<<endl;
    }
     cout<<"maximun no is : "<<max;
    
}