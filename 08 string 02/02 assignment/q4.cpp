// Given an array of strings. Check whether they are anagram or not.
#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string arr[]={"car","rac"};
    string s1=arr[0];
    string s2=arr[1];
    
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"this is an anagram";
    }
    else cout<<"not";
}