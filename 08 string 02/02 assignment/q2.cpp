// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2
#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    vector<string>v;
    v.push_back(s);
    for (int i=0;i<v.size();i++){
        if(v[i]!=v[i+1])
        cout<<v[i];
        break;
    }
    
}
