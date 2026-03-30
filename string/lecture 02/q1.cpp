#include <iostream>
#include <algorithm>
using namespace std;
int main(){   
    string s="physicswallah";
    sort(s.begin(),s.end());
    cout<<s<<endl;
    string p="wallahphysics";
    sort(p.begin(),p.end());
    cout<<p<<endl;
    if(s==p){
        cout<<"yes this is an anagram";
    }
    else{
        cout<<"no this is not an anagram";
        
    }

    
}