## Problem: Move Zeroes (Basic Algorithms)
**Link:** https://leetcode.com/problems/move-zeroes/description/

### Approach
Used a two-pointer technique: one pointer tracks where the next non-zero element should be placed, while the other scans through the array. Non-zero elements are moved forward in-place, and the remaining positions are filled with zeroes at the end.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Also explored a bubble-sort-style swap approach (repeatedly swapping adjacent 0/non-zero pairs), which works but runs in O(n²) — much slower on large arrays than the two-pointer method.