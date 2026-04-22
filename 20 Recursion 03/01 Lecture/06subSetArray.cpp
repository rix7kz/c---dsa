#include<iostream>
#include<vector>
using namespace std;
void parr(int arr[],int n,int idx, vector<int> ans){
    // base case
    if (idx==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    parr(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    parr(arr,n,idx+1,ans);
}

int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    parr(arr,n,0,v);
}


// also done on leetcode 78