## Problem: Longest Common Prefix (Easy–Medium)
**Link:** https://leetcode.com/problems/longest-common-prefix/description/

### Approach
Started with the first string as an initial guess for the prefix, then compared it against each remaining string, shrinking the guess character-by-character from the end whenever it didn't match the start of the current string.

### Complexity
- Time: O(S), where S is the total number of characters across all strings (worst case)
- Space: O(1) extra, aside from the output string

### Notes
Edge case to watch: an empty input array, and the case where no common prefix exists at all (guess shrinks down to an empty string). 