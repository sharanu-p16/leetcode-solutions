## Problem: Reverse a String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/description/

### Approach
Used a two-pointer technique: one pointer starts at the beginning of the array, the other at the end. Swap the characters at both pointers, then move the left pointer forward and the right pointer backward, repeating until they meet in the middle.

### Complexity
- Time: O(n)
- Space: O(1), since the string is reversed in-place

### Notes
Edge cases to consider: an empty string (nothing to reverse) and a single-character string (already its own reverse, loop shouldn't run).