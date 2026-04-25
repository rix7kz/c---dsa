#include<iostream>
using namespace std;
int gcd(int a ,int b){
    // base case
    if(a==0) return b;

    // kaam
    else return gcd(b%a,a);

}

//  TC of gcd is O(log(a+b));
int main(){
    int a = 27;
    int b = 45;
    cout<<gcd(a,b);

}