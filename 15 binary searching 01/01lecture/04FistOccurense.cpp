#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    int x = 0;
    int l =0;
    int h=n-1;

    while (l<=h){
    int m  = l+(h-l)/2;   
        if (arr[m]==x){
             if (arr[m-1]!=x){
                 cout<<m<<endl;    
                 return 0; 
             }
             else h=m-1;
        }
        else if(arr[m]>x) h= m-1;
        else l= m+1;
    }
    cout<<-1;
    // return -1;
}