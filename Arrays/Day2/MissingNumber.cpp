// Problem: Missing Number (Leetcode 268)
// Link: https://leetcode.com/problems/missing-number/submissions/1723050200/
// Difficulty: Easy
//  Optimal: Sum formula (O(n), O(1))
// Author: Tanishqua Aher

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums) {
            actualSum += num;
        }

        return expectedSum - actualSum;
    }
};
