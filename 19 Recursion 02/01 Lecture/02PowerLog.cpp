#include<iostream>
using namespace std;

int fibo(int x,int n){
    // kaam
    if(n==1 ) return 1;
    int ans= fibo(int x, int n/2);
    return ans*ans;
}
int main(){
 cout<<fibo(3,2);
}