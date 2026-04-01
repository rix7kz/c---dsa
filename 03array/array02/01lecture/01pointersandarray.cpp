#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int*ptr = arr;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" "<<endl;
        ptr++;
    }

    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" "<<endl;
       
    }

    for(int i=0;i<=4;i++){
        cout<<i[arr]<<" "<<endl;
        ptr++;
    }

    for(int i=0;i<=4;i++){
        cout<<i[ptr]<<" "<<endl;
        ptr++;
    }
}