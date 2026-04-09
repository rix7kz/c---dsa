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
    sort(s.begin(),s.end());
    int n=s.size();
    int max=n-1;
    for(int i=n-1;n>=0;i--){
        if (s[i]!=max){
            cout<<s[i];
            break;
        }
    }
    
}
