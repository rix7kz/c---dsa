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
    int p;
    cout<<"enter no of 2 rows: ";
    cin>>p;
    int q;
    cout<<"enter no of 2 columns: ";
    cin>>q;
    if (n==p ){
        int a[m][n];
        int b[p][q];
        int res[m][q];
        cout<<"enter the elements of thee first matrices: "<<endl;
        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[m][n];
            }
            cout<<endl;
        }
        cout<<"enter the elements of thee second matrices: "<<endl;
        for (int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[p][q];
            }
            cout<<endl;
        }

        for(int i=0;i<m;i++){
            for (int j=0;j<q;j++){
                res[i][k]=0;
                for(int k=0;k<p;k++){
                    res[i][k]+=a[i][k]*b[k][j];
                }
            }
        }
        for (int i=0;i<m;i++){
            for (int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else {
        cout<<"the matrices can not be multiplied";
    }
    
}