// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"
#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s;
    cin>>s;
    // cout<<s;
    string rev=s;
    reverse(rev.begin(),rev.end());
    cout<<s+rev;
}
