// 🔍 Problem: Given a sorted array (may contain negatives),
// return an array of squares, also sorted in non-decreasing order.

// ✅ Approaches:
// • Brute Force – Square all elements and sort (O(n log n))
// • Optimized – Use Two Pointers (O(n))

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        /*
        // 🔸 Brute Force Approach
        // Step 1: Square all elements
        // Step 2: Sort the squared array
        // Time: O(n log n), Space: O(n)

        vector<int> square;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int sqr = nums[i] * nums[i];
            square.push_back(sqr);
        }

        sort(square.begin(), square.end());
        return square;
        */

        // 🔹 Optimized Approach: Two Pointers
        // Time: O(n), Space: O(n)
        int n = nums.size();
        vector<int> res(n);
        int left = 0, right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if (leftSq > rightSq) {
                res[pos--] = leftSq;
                left++;
            } else {
                res[pos--] = rightSq;
                right--;
            }
        }

        return res;
    }
};
