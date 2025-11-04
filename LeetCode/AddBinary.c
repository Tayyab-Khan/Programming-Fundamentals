#include <string.h>
#include <stdlib.h>

void reverse(char* s, int len) {
    int start = 0;
    int end = len - 1;
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = (lenA > lenB) ? lenA : lenB;
    
    char* result = (char*)malloc(maxLen + 2);
    
    int i = lenA - 1;
    int j = lenB - 1;
    int k = 0; 
    int carry = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digitA = (i >= 0) ? (a[i] - '0') : 0;
        int digitB = (j >= 0) ? (b[j] - '0') : 0;
        
        int sum = digitA + digitB + carry;
        
        int bit = sum % 2;
        carry = sum / 2;
        
        result[k] = bit + '0';
        
        k++;
        if (i >= 0) i--;
        if (j >= 0) j--;
    }
    
    result[k] = '\0';
    
    reverse(result, k);
    
    return result;
}
