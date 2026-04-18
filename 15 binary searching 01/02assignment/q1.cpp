// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6
// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ does not exist return -1.

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,4,4,5};
    int x =4;
    int l=0;

    int n= sizeof(arr)/sizeof(arr[0]);
    int h=n-1;
    int ans=-1;
    while(l<=h){
        int m= l+(h-l)/2;
        if(arr[m]==x){
            ans=m;
            l=m+1;
        }
        else if(arr[m]<x) l=m+1;
        else h=m-1;
    }
    cout<<ans;
}