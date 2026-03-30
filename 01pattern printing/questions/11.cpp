#include<stdio.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        // Print ascending numbers (1 to i)
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*(n-i)+1;j++){
            cout<<" ";
        }
        // Print descending numbers (i down to 1)
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    
}