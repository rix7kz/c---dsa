#include<iostream>
using namespace std;
void rchar(string ans,string original){
    if(original.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    rchar(ans,original.substr(1));
    rchar(ans+ch,original.substr(1));
}
int main(){
    string str="abc";
    rchar("",str);
}