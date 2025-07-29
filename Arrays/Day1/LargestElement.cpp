// Problem: Largest Element in an Array
// Link: https://takeuforward.org/plus/dsa/problems/largest-element
// Approach: Traverse once, keep updating max
// Time: O(n), Space: O(1)

int findLargestElement(vector<int>& nums) {
    int maxElement = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > maxElement) {
            maxElement = nums[i];
        }
    }
    return maxElement;
}
