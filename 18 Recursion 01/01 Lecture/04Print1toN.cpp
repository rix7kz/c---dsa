#include<iostream>
using namespace std;
void print(int i,int n){
    // base case
    if (i>n)return;
    // kaam
    cout<<i<<endl;
    // call
    print(i+1,n);
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(1,n);
}