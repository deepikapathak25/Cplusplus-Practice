class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        /*************** Approach 1: Brute Force (Nested Loops) ***************
         * Time Complexity: O(n^2)
         * Space Complexity: O(n)
         * Logic: For each element, find the max of the right subarray manually.
        **********************************************************************/
        /*
        int n = arr.size();
        vector<int> ans;
        for (int i = 0; i < n - 1; i++) {
            int maxi = arr[i + 1];
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > maxi) {
                    maxi = arr[j];
                }
            }
            ans.push_back(maxi);
        }
        ans.push_back(-1);
        return ans;
        */


        /*************** Approach 2: Brute Force (Using STL max_element) ***************
         * Time Complexity: O(n^2)
         * Space Complexity: O(n)
         * Logic: Use built-in max_element for each suffix starting at i+1.
        ********************************************************************************/
        /*
        int n = arr.size();
        vector<int> ans;
        for (int i = 1; i < n; i++) {
            int maxi = *max_element(arr.begin() + i, arr.end());
            ans.push_back(maxi);
        }
        ans.push_back(-1);
        return ans;
        */


        /*************** Approach 3: Brute Force (While Loop Variation) ***************
         * Time Complexity: O(n^2)
         * Space Complexity: O(n)
         * Logic: Same as approach 1, using a while loop.
        ********************************************************************************/
        /*
        int n = arr.size();
        vector<int> ans;
        int i = 0;
        while (i < n - 1) {
            int maxi = arr[i + 1];
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > maxi) {
                    maxi = arr[j];
                }
            }
            ans.push_back(maxi);
            i++;
        }
        ans.push_back(-1);
        return ans;
        */


        /*************** Approach 4: Optimized (Reverse Traversal) ***************
         * Time Complexity: O(n)
         * Space Complexity: O(n)
         * Logic: Traverse from the end, keep track of maximum seen so far.
        ************************************************************************/
        /*
        int n = arr.size();
        vector<int> ans;
        int maxi = -1;

        for (int i = n - 1; i >= 0; i--) {
            ans.push_back(maxi);
            maxi = max(maxi, arr[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
        */


        /*************** Approach 5: Optimized In-Place ***********************
         * Time Complexity: O(n)
         * Space Complexity: O(1)
         * Logic: Modify the array in-place by tracking max from the right.
        **********************************************************************/
        int n = arr.size();
        int maxi = -1;

        for (int i = n - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = maxi;
            maxi = max(temp, maxi);
        }
        return arr;
    }
};
