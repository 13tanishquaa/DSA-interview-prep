// Problem: Max Consecutive Ones (Leetcode 485)
// Link: https://leetcode.com/problems/max-consecutive-ones/submissions/1716963123/
// Approach: Count consecutive 1s and track the max
// Time: O(n), Space: O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                count++;
                maxcount=max(maxcount,count);
            }
            else{
                count = 0;
            }
        }
        return maxcount;
    }
};
