#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    for (int i = digitsSize - 1; i >= 0; i--) {
        digits[i]++;
        
        if (digits[i] < 10) {
            *returnSize = digitsSize;
            return digits;
        }
        
        digits[i] = 0;
    }

    int newSize = digitsSize + 1;
    int* result = (int*)calloc(newSize, sizeof(int));
    
    result[0] = 1;
    *returnSize = newSize;
    
    return result;
}
