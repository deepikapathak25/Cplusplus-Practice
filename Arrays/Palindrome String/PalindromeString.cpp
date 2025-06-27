class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        
        // Brute Force Approach //
        // Time: O(n), Space: O(n)
        // Logic: Reverse the string and compare with original
        /*int n=s.size();
        string a(n,' ');
        
        for(int i=0;i<n;i++){
            a[n-i-1]=s[i];
        }
        
        return a==s;*/
        
        //***** Optimized Approach *****/
        // Time: O(n), Space: O(1)
        // Logic: Use two-pointer technique to compare characters from both ends 
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};