#include <string.h>

// Helper function to get the integer value of a Roman symbol
int getValue(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; // Should never happen
    }
}

int romanToInt(char* s) {
    int len = strlen(s);
    if (len == 0) {
        return 0;
    }
    
    // 1. Start with the value of the last character
    int total = getValue(s[len - 1]);
    
    // 2. Loop backward from the second-to-last character
    for (int i = len - 2; i >= 0; i--) {
        
        int currentVal = getValue(s[i]);
        int previousVal = getValue(s[i + 1]);
        
        // 3. Compare current to the one on its right (previous)
        if (currentVal < previousVal) {
            // 4. Subtraction case (like 'I'V)
            total -= currentVal;
        } else {
            // 5. Addition case (like 'V'I)
            total += currentVal;
        }
    }
    
    return total;
}
