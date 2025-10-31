#include <string.h>

int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int length = 0;
    
    int i = len - 1;

    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    
    return length;
}
