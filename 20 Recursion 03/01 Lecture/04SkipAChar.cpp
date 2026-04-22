#include<iostream>
using namespace std;
void rchar(string ans,string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch=original[0];

    if(ch=='e'){
        rchar(ans,original.substr(1));
    }else rchar(ans+ch,original.substr(1));
}
int main(){
    string str="deepanshu tiwari";
    rchar("",str);
}