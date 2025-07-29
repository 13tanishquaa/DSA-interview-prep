// Problem: Check if the array is sorted
// Link: https://takeuforward.org/plus/dsa/problems/check-if-the-array-is-sorted-ii
// Approach: Traverse and compare current with previous
// Time: O(n), Space: O(1)

bool isSorted(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < nums[i - 1]) {
            return false;
        }
    }
    return true;
}
