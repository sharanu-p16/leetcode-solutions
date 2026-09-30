## Problem: Valid Parentheses (Stack)
**Link:** https://leetcode.com/problems/valid-parentheses/description/

### Approach
Used a stack (simulated with a char array and a top index) to track opening brackets. Every closing bracket is checked against the top of the stack — if it doesn't match the expected type, or the stack is empty, the string is invalid.

### Complexity
- Time: O(n)
- Space: O(n), for the stack in the worst case (all opening brackets)

### Notes
Learned that a stack fits this problem naturally because of LIFO order — the most recently opened bracket must be the next one closed. Also had to handle the edge case of a closing bracket appearing when the stack is already empty.