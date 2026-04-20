// Given a positive integer, return true if it is a power of 2 using recursion.
#include<iostream>
using namespace std;
bool power(int n){
    if(n==1) return true;
    if(n%2==0) return power(n/2);
    return false;

}
int main(){
    int n;
    cin>>n;
    power(n);
    if(power(n)){
        cout<<"yes";
    }
    else cout<<"no";

}