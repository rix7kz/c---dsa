#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> v;
    v.push_back(6);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<" ";
    v.push_back(6);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<" ";
    v.push_back(6);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<" ";
    v.push_back(6);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<" ";
    v.push_back(6);
    cout<<v.size()<<" ";
    cout<<v.capacity()<<" ";
    v.push_back(6);
    cout<<v[0];
    cout<<v[1];
    cout<<v[2];
    cout<<v[3];
    cout<<v[4];
    cout<<v[5];

    cout<<endl;

    v.pop_back();
    for(int i=0;i<=v.size();i++){
        cout<<v[i];
    }
    

    



}