#include<iostream>
using namespace std;

int fibo(int x,int n){
    // kaam
    if(n==1 ) return x;
    if(n==0) return 1;
    int ans =fibo(x,n/2);

    
    if(n%2==0){
         return ans*ans;
    }
    else{
        return ans*ans *x;
    }
}
int main(){
 cout<<fibo(3,2);
} 