#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Brute Force
    sort(arr.start(),arr.end());
    return arr[n-1];
    
    //There is no any better approach
    
    //Optimal Approach
    int max=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
