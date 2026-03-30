#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    // Method 1: Print digits in reverse order (one by one)
    cout << "Digits in reverse order: ";
    while(n > 0){
        int lastDigit = n % 10;  // Extract last digit
        cout << lastDigit << " ";  // Print it
        n = n / 10;  // Remove last digit
    }
    cout << endl;
    
    return 0;
}


