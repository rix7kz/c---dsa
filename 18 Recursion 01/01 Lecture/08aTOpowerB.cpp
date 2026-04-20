#include<iostream>
using namespace std;
int fact(int a,int b){
    // base case
    if (b==0){
        return 1;
    }
    // recursive function
    return a*fact(a,b-1);
}
int main(){
    cout<<fact(3,4);
}