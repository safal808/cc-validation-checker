#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool isNString(const string& s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}

int main() {
    string cc;
    
    
    cout << "Enter 'quit' anytime to exit." << endl;
    
    while (true) {
        
        cout << "Please enter Credit Card number: ";
        cin >> cc;
        
        if (cc== "quit")
            break;
        
        else if (!isNString(cc)) {
            cout << "Invalid input! ";
            continue;
        }
            
        int len = cc.length();
        int Sum = 0;
        
        
        for (int i = len - 2; i >= 0; i = i - 2) {
            int dbl = ((cc[i] - 48) * 2);
            if (dbl > 9) {
                dbl = (dbl / 10) + (dbl % 10);
            }
            Sum += dbl;
        }
        
        
        for (int i = len - 1; i >= 0; i = i - 2) {
            Sum += (cc[i] - 48);
        }
        
        
        cout << (Sum % 10 == 0 ? "CC is Valid!" : "CC is Invalid!") << endl;
        
        continue;        
    }

    return 0;
}
