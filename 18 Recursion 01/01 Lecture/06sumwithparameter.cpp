#include<iostream>
using namespace std;
void sum(int i,int n){
    // base case
    if(n==0){
        cout<<i<<endl;
        return;
    }
   sum(i+n,n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    sum(0,n);
}