#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int reverse = 0;
    
    while(n > 0){
        int lastDigit = n % 10;  // Extract last digit
        reverse = reverse * 10 + lastDigit;  // Add to reverse number
        n = n / 10;  // Remove last digit
    }
    
    cout << "Reversed number: " << reverse << endl;
    
    return 0;
}


