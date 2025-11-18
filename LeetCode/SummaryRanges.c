#include <stdio.h>
#include <stdlib.h>

char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    if (numsSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    char** result = (char**)malloc(numsSize * sizeof(char*));
    int count = 0;
    int start_index = 0;

    for (int i = 0; i < numsSize; i++) {
        
        if (i == numsSize - 1 || (long)nums[i + 1] != (long)nums[i] + 1) {
            char* str = (char*)malloc(30 * sizeof(char));
            
            if (nums[start_index] == nums[i]) {
                sprintf(str, "%d", nums[start_index]);
            } else {
                sprintf(str, "%d->%d", nums[start_index], nums[i]);
            }
            
            result[count++] = str;
            start_index = i + 1;
        }
    }

    *returnSize = count;
    return result;
}
