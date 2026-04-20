// Write a program to print the sum of all odd numbers from a to b (inclusive) using recursion.

#include<iostream>
using namespace std;
void sum(int i,int n){
    // base case
    if(n==1){
        cout<<i<<endl;
        return;
    }
   sum(i+n,n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    sum(1,n);
}