#include <iostream>
#include<vector>
using namespace std;
void suba(vector<int>v ,int arr[],int n,int idx){
    // base case
    if(n==idx){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
            cout<<endl;
            return;
    }
    //kaam
    suba(v,arr,n,idx+1);
    if(v.size()==0  ||  arr[idx-1] == v[v.size()-1]){   //will work in unique elements only
        v.push_back(arr[idx]);
        suba(v,arr,n,idx+1);
    }

}
int main(){
    int arr[]= {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    vector<int>v;
    suba(v,arr,n,0);
}