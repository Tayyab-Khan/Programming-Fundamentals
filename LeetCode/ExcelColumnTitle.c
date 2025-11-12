#include <stdlib.h>
#include <string.h>

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

char* convertToTitle(int columnNumber) {
    char* result = (char*)malloc(10 * sizeof(char)); 
    int i = 0;
    
    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26;
        result[i++] = (char)(remainder + 'A');
        columnNumber = (columnNumber - 1) / 26;
    }
    
    result[i] = '\0';
    
    reverse(result, i);
    
    return result;
}
