// Write a program to find the minimum element of an array using recursion.
#include<iostream>
#include<climits>
using namespace std;
int revarr(int arr[],int n ,int idx){
    // base case
    if (idx==n) return INT_MAX;
    return min(arr[idx],revarr(arr,n,idx+1));   
}
int main(){
    int arr[]={1,4,2,5,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<revarr(arr,n,0);
}