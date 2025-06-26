class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        
        /*Brute force having runtime error => TC: O(n^2), SC: O(1)
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]+arr[j]==target){
                    return true;
                }
            }
        }
        return false;*/
        
        /*Better approach using two pointer approach and sorting algorithm => TC: O(nlogn)+O(n), SC: O(1)
        sort(arr.begin(),arr.end());
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            if(arr[i]+arr[j]<target){
                i++;
            }
            else if(arr[i]+arr[j]>target){
                j--;
            }
            else if(arr[i]+arr[j]==target){
                return true;
            }
        }
        return false;*/
        
        //Optimal Approach using unordered map because array is unsorted that is why this is optimal but if array is sorted then two pointer approach will be the optimal approach => TC:O(n), SC: O(n)
        unordered_map<int,int>mp;
        
        for(int i=0;i<arr.size();i++){
            int compliment = target-arr[i];
            
            if(mp.find(compliment) != mp.end()){
                return true;
            }
            mp[arr[i]]=i;
        }
        return false;
    }
};