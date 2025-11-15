#include <string.h>

int titleToNumber(char* columnTitle) {
    
    long long result = 0;
    int len = strlen(columnTitle);
    
    for (int i = 0; i < len; i++) {
        int charValue = (columnTitle[i] - 'A') + 1;
        result = result * 26 + charValue;
    }
    
    return (int)result;
}
