#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {
    
    *returnSize = rowIndex + 1;
    
    int* row = (int*)calloc(*returnSize, sizeof(int));
    
    row[0] = 1;
    
    for (int i = 1; i <= rowIndex; i++) {
        for (int j = i; j >= 1; j--) {
            row[j] = row[j] + row[j - 1];
        }
    }
    
    return row;
}
