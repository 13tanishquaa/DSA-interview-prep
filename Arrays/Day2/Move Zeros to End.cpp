// Problem: Move Zeroes (Leetcode 283)
// Link: https://leetcode.com/problems/move-zeroes/submissions/1721881056/
// Approach: Two-pointer method — find first zero, shift non-zeros forward
// Time: O(n), Space: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j =-1;
         for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
         }
         if(j==-1){
            return ;
         }
         for(int i =j+1 ; i <nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
         }        
    }
};
