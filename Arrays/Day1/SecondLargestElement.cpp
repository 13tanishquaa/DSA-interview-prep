// Problem: Second Largest Element in an Array without sorting
// Link: https://takeuforward.org/plus/dsa/problems/second-largest-element
// Approach: One pass to find largest and second largest
// Time: O(n), Space: O(1)

class Solution {
public:
    int secondLargest(vector<int>& nums) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : nums) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num < largest && num > secondLargest) {
            secondLargest = num;
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}
}
