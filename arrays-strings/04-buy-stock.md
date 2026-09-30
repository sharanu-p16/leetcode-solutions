## Problem: Best Time to Buy and Sell Stock (Easy–Medium)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

### Approach
Tracked the minimum price seen so far while scanning the array once, updating the maximum profit whenever the current price minus the running minimum beats the best profit found so far.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Initially thought of a brute-force nested loop (O(n²)) comparing every buy/sell pair, but realized a single pass with a running minimum was enough since we only care about the best past price at each point.