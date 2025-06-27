// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        
        /* Brute force beacuse it uses extra space => TC:O(n), SC: O(n)
        int n=s.size();
        string a(n,' ');
        for(int i=0;i<n;i++){
            a[n-i-1]=s[i];
        }
        return a;
        
        //using stl
        reverse(s.begin(), s.end());
        
        // 1. Optimized approach => TC:O(n), SC:O(1)
        int n=s.size();
        for(int i=0;i<n/2;i++){
            swap(s[i],s[n-i-1]);
        }
        return s;*/
        
        // 2. Optimized approach => TC:O(n), SC:O(1)
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};
