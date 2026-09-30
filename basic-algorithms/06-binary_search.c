#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int low = 0; 
    int high = numsSize - 1; 

    while (low <= high) {
       
        int mid = low + (high - low) / 2; //prevents overflow(handles large numbers)

        if (nums[mid] == target) {
            return mid; 
        } else if (target > nums[mid]) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        } 
    } 

    return -1; 
}

int main() {
    
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    int result = search(nums, numsSize, target);

    if (result != -1) {
        printf("Target %d found at index: %d\n", target, result);
    } else {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}