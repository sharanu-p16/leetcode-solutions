## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/description/

### Approach
Used a brute-force nested loop to check every pair of numbers against the target sum, since this was the first pass at the problem. Returns the indices of the two numbers using LeetCode's exact function signature with a dynamically allocated result array.

### Complexity
- Time: O(n²)
- Space: O(1) extra (excluding the output array)

### Notes
A hash map could bring this down to O(n) time, but I chose brute force first to build intuition before optimizing.