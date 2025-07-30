// Problem: Left Rotate an Array by One Place
// Link: https://takeuforward.org/plus/dsa/problems/left-rotate-array-by-one
// Approach: Store first element, shift left, place at end
// Time: O(n), Space: O(1)

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int n = nums.size();
        int x = nums[0];
        for (int i=1;i<n;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=x;
    }
};
