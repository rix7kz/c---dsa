#include<iostream>
using namespace std;
void toh(int n,char a, char b, char c){
    // base case
    if(n==0) return;
    // kaam
    toh(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    toh(n-1,b,a,c);
}
int main(){
    int n;
    cin>>n;
    toh(n,'a','b','c');

}