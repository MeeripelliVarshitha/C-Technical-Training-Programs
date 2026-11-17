#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSumBruteForce(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2; 
                return result;
            }
        }
    }
    *returnSize = 0;
    free(result);
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    
    int* indices = twoSumBruteForce(nums, 4, target, &returnSize);
    
    if (returnSize == 2) {
        printf("Indices: [%d, %d]\n", indices[0], indices[1]);
        free(indices); 
    } else {
        printf("No solution found.\n");
    }
    return 0;
}
