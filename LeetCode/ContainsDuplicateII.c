#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int value;
    int originalIndex;
} Element;

int compare(const void* a, const void* b) {
    Element* e1 = (Element*)a;
    Element* e2 = (Element*)b;
    
    if (e1->value != e2->value) {
        return (e1->value < e2->value) ? -1 : 1;
    }
    
    return e1->originalIndex - e2->originalIndex;
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    if (numsSize == 0) return false;

    Element* elements = (Element*)malloc(numsSize * sizeof(Element));
    
    for (int i = 0; i < numsSize; i++) {
        elements[i].value = nums[i];
        elements[i].originalIndex = i;
    }
    
    qsort(elements, numsSize, sizeof(Element), compare);
    
    for (int i = 0; i < numsSize - 1; i++) {
        if (elements[i].value == elements[i + 1].value) {
            int diff = elements[i + 1].originalIndex - elements[i].originalIndex;
            if (diff <= k) {
                free(elements);
                return true;
            }
        }
    }
    
    free(elements);
    return false;
}
