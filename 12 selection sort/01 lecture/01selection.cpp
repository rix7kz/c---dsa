#include<iostream> 
#include<climits>
using namespace std;
int main(){
    int arr[] = { 1,3,4,5,2};
    int n=5;
    for( int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    //selection sorting
    for (int i=0;i<n-1;i++){
        int max= INT_MAX;
        int minx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<max){
                max=arr[j];
                minx=j;
            }
        }
        swap(arr[i],arr[minx]);
    }

    for (int ele:arr){
        cout<<ele<<" ";
    }
}