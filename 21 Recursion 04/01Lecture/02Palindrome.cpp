#include<iostream>
#include<string>
using namespace std;
bool isp(string s,int i,int j){
    // base case
    if(i>j) return true;
    // kaam
    if (s[i]!=s[j]) return false;
    else return isp(s,i+1,j-1);
}
int main(){
    string s="racecar";
    cout<<isp(s,0,s.length()-1);
}