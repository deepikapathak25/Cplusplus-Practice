#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Brute Force using soring
    TC => O(nlogn+n)
    SC => O(1)

    int largest;
    int secMax=INT_MIN;

    sort(arr.begin(),arr.end());
    largest=arr[n-1];

    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            secMax=arr[i];
            break;
        }
    }
    return secMax;

    //Optimal Approach
    #include <bits/stdc++.h>
    using namespace std;

    int findSecondLargest(int n, vector<int> &arr) {
      	if (n < 2) return -1; // Not enough elements

    	int largest = INT_MIN;
    	int secondLargest = INT_MIN;

    	// First loop to find the largest
    	for (int i = 0; i < n; i++) {
        	if (arr[i] > largest) {
            		largest = arr[i];
        	}
    	}

    	// Second loop to find the second largest
    	for (int i = 0; i < n; i++) {
        	if (arr[i] != largest && arr[i] > secondLargest) {
            		secondLargest = arr[i];
        	}
    	}

    	return (secondLargest==INT_MIN)?-1: secondLargest;
    }

}