// Given an integer num, return the number of steps to reduce it to zero. In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it. [Leetcode 1342

#include<iostream>
using namespace std;
int nos(int n){
    // base case
    if(n==0)return 0;
    // if(n==1) return 1;
    // kaam
    int count=0;
    if(n%2==0){
        count++;

        return count +nos(n/2);
    }
    else{
       count++;

      return count+nos(n-1);
    }
    // return count;

}
int main(){
    int n;
    cin>>n;
    cout<<nos(n);
}