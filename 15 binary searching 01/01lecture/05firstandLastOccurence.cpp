#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    int x = 4;
    int l =0;
    int h=n-1;
    int first=-1;
    int last=-1;

    // first occurence

    while (l<=h){
    int m  = l+(h-l)/2;   
        if (arr[m]==x){
            first = m;
            h=m-1;
        }
        else if(arr[m]>x) h= m-1;
        else l= m+1;
    }

    // last occurence

     l =0;
     h=n-1;
    while (l<=h){
    int m  = l+(h-l)/2;   
        if (arr[m]==x){
           last=m;
           l=m+1;
        }
        else if(arr[m]>x) h= m-1;
        else l= m+1;
    }
    cout<<first<<" , "<<last;
    // return -1;
}

// also done on leetcode #34