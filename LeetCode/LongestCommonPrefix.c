#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    int firstLen = strlen(strs[0]);

    for (int i = 0; i < firstLen; i++) {
        char charToMatch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            
            int currentLen = strlen(strs[j]);
            
            if (i == currentLen || strs[j][i] != charToMatch) {
                strs[0][i] = '\0'; 
                return strs[0];
            }
        }
    }
    
    return strs[0];
}
