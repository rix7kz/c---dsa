// // Write a program to rotate the matrix by 90 degrees anti-clockwise.
// input
// 1 2 3
// 4 5 6
// 7 8 9
// output
// 3 6 9
// 2 5 8
// 1 4 7

#include<iostream>
#include<vector>
using namespace std;
int main(){
        int m;
        cout<<"enter the no of rows and column of the square matrix: ";
        cin>>m;
    
    
        int a[m][m];
       
        cout<<"enter the elements of thee first matrices: "<<endl;
        for (int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }

        for (int j=m-1;j>=0;j--){
          for(int i=0;i<m;i++){
            cout<<a[i][j];
          }
            cout<<endl;
        }
        
       
    
}