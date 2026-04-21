#include<iostream>
using namespace std;

int fibo(int n){
    // kaam
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2); // multiple calls here!!!!

}
int main(){
 cout<<fibo(8);
}