// LeetCode: Maximum Difference Between Increasing Elements
// Problem: Given an array nums, return the maximum difference between nums[j] - nums[i] 
//          such that j > i and nums[j] > nums[i]. If no such pair exists, return -1.

class Solution {
public:
    int maximumDifference(vector<int>& nums) {

        // Brute Force Approach (Commented Out)
        // Time Complexity: O(n^2)
        // Space Complexity: O(1)
        /*
        int n = nums.size();
        int diff = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[j] > nums[i]) {
                    diff = max(diff, nums[j] - nums[i]);
                }
            }
        }
        return diff;
        */

        // Optimized Approach
        // Time Complexity: O(n)
        // Space Complexity: O(1)

        int n = nums.size();
        int minElement = nums[0];  // To store the minimum element seen so far
        int maxDiff = -1;          // Initialize maximum difference as -1

        for (int i = 1; i < n; i++) {
            if (nums[i] > minElement) {
                maxDiff = max(maxDiff, nums[i] - minElement);
            } else {
                minElement = nums[i];
            }
        }

        return maxDiff;
    }
};
