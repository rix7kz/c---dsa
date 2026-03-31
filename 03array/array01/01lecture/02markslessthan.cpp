#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Of Students= ";
    cin>>n;

    int marks[n];

    cout<<"Enter The Marks Of The Students = ";


//input

    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }

    for(int i=0;i<=n-1;i++){
        if(marks[i]<35) cout<<i<<" ";
        
    }
}