#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int insertpos = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[insertpos];
            nums[insertpos] = nums[i];
            nums[i] = temp;
            insertpos++;
        }
    }
}


void printArray(int* nums, int numsSize) {
    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
        if (i < numsSize - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    
    printf("Test Case 1 Input:  ");
    printArray(nums1, size1);
    
    moveZeroes(nums1, size1);
    
    printf("Test Case 1 Output: ");
    printArray(nums1, size1);
    printf("\n");

    
    int nums2[] = {0};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    
    printf("Test Case 2 Input:  ");
    printArray(nums2, size2);
    
    moveZeroes(nums2, size2);
    
    printf("Test Case 2 Output: ");
    printArray(nums2, size2);

    return 0;
}