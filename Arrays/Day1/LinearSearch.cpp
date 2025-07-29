// Problem: Linear Search
// Link: https://takeuforward.org/plus/dsa/problems/linear-search
// Approach: Check each element until target is found
// Time: O(n), Space: O(1)

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }
        return -1; 
    }
};
