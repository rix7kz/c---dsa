// Write a program to find the index of a given element in an array using recursion. If the element is present, return its index; otherwise, return -1.

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