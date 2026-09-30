## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/description/

### Approach
Counted the frequency of each character in both strings using a fixed-size array (26 slots for lowercase letters), incrementing for the first string and decrementing for the second. If every count ends at zero and both strings are the same length, they're anagrams.

### Complexity
- Time: O(n), where n is the length of the strings
- Space: O(1), since the frequency array size is fixed regardless of input size

### Notes
Checked string lengths first as an early exit — if they differ, the strings can't possibly be anagrams, so there's no need to even scan characters.