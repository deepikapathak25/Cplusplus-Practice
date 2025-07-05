// User function template for C++
// Problem: Remove vowels from a lowercase string
// Constraints: 1 <= |s| <= 1e5, lowercase letters only
// Time Complexity: O(n)
// Auxiliary Space: O(1) (in-place)

class Solution {
public:

    /**
     * Removes all vowels ('a', 'e', 'i', 'o', 'u') from the input string.
     * Modifies the input string in-place to achieve O(1) auxiliary space.
     *
     * @param s Reference to the input string.
     * @return The modified string with vowels removed.
     */
    string removeVowels(string& s) {
        
        // ===========================
        // Method 1: Extra string (SC: O(n)) 
        // ===========================
        /*
        string t = "";
        for (char c : s) {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                t.push_back(c);
            }
        }
        return t;
        */

        // ===========================
        // Method 2: In-place (SC: O(1))
        // ===========================
        
        int j = 0;  // write pointer
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                s[j++] = s[i];
            }
        }
        s.resize(j);  // resize to new length
        return s;
        
        // ===========================
        // Method 3: Extra string, alternative syntax (SC: O(n))
        // ===========================
        /*
        string t = "";
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                t.push_back(s[i]);
            }
        }
        return t;
        */
    }
};
