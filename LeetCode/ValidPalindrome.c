#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    int len = strlen(s);
    if (len == 0) {
        return true;
    }
    
    int left = 0;
    int right = len - 1;
    
    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}
