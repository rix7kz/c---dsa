// Check whether the given string is palindrome or not.

// Input : "abcde"
// Output : No

// Input : "abcdcba"
// Output : Yes

#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[]={"sydney sweeney"};
    int count=0;
    int i = 0;
    while(str[i]!='\0'){
        if (str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
            i++;
    }
    cout<<count;
}