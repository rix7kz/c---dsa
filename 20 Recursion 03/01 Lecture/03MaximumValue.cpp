#include<iostream>
#include<vector>
#include<climits>

using namespace std;
void display(int arr[],int n, int idx ,int max){
    // base case
    if(idx==n) {
        cout<<max;
        return;
    };
    if(arr[idx]>max)max=arr[idx];
    // cout<<arr[idx]<<" ";
    display(arr, n,idx +1,max);
}

// void display2(vector<int> &v,int idx){
//     if(idx==v.size()) return;
//     cout<<v[idx]<<" ";
//     display2(v,idx+1);
// }

int maxinarr(int arr[],int n, int idx){
    // base case
    if(idx==n) return INT_MIN;
    // kaam
    return max(arr[idx],maxinarr(arr,n,idx+1));
}
int main(){
    int arr[]={1,2,3,4,5,6,7,43,3,6,32,2,567};
    int n= sizeof(arr)/sizeof(arr[0]);
    // vector<int>v(n);
    // for(int i=0;i<n;i++){
    //     v[i]=arr[i];
    // }
    display(arr,n,0,INT_MIN);
    cout<<endl<<"second method"<<endl;
    cout<<maxinarr(arr,n,0);
    // cout<< endl<<"vector array"<<endl;
    // display2(v,0);
}