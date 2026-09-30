## Problem: Binary Search (Easy–Medium)
**Link:** https://leetcode.com/problems/binary-search/description/

### Approach
Used the standard iterative binary search: maintain `left` and `right` pointers over a sorted array, repeatedly check the middle element, and narrow the search range based on whether the target is smaller or larger than the middle value.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Had to be careful with the midpoint calculation — using `left + (right - left) / 2` instead of `(left + right) / 2` avoids potential integer overflow on very large arrays.