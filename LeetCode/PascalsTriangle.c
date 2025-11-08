#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    
    *returnSize = numRows;
    
    int** result = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    
    for (int i = 0; i < numRows; i++) {
        int rowSize = i + 1;
        (*returnColumnSizes)[i] = rowSize;
        
        result[i] = (int*)malloc(rowSize * sizeof(int));
        
        result[i][0] = 1;
        result[i][i] = 1;
        
        for (int j = 1; j < i; j++) {
            result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }
    }
    
    return result;
}
