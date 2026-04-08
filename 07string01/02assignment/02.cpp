// Input a string of length n and count all the consonants in the given string

// Input : "pwians"
// Output : 4

// Input : "abdc"
// Output : 3


#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[]={"sydney sweeney"};
    int count=0;
    int i = 0;
    while(str[i]!='\0'){
        if (str[i]!='a'|| str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u')
            count++;
            i++;
    }
    cout<<count;
}