// Problem: Remove Duplicates from Sorted Array
// Leetcode: https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1723037655/
// Difficulty: Easy
// Approach: Two-pointer in-place overwrite
// Time Complexity: O(n)
// Space Complexity: O(1)
// Author: Tanishqua Aher

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
