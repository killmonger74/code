/*   MAXIMUM  SUBARRAY

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
	Input: [-2,1,-3,4,-1,2,1,-5,4],
	Output: 6
	Explanation: [4,-1,2,1] has the largest sum = 6.

*/
/* This can be done in three different algorithms
O(N^2),O(NLOG(N)) and (O(N) kadane's algorithm*/
/* I solved the problem in two different complexity wrt to time */




#include<bits/stdc++.h>

class Solution {
public:
    int maxSubArray(vector<int>& v) {
      /*   int sum=0,best=INT_MIN; //kadane's algorithm
         for(int i=0;i<nums.size();i++){ /// this will give the O(N)
             sum=max(nums[i],sum+nums[i]);
             best=max(best,sum);
         }
         return best;
	} */

	/* the secoond approach is Divide and Conquer of O(NLOG(N))*/
        int inf=1e9;
        int n=v.size(); 
        if(n==1){
        return v[0];
        }
        int mid=(n-1)/2;
        int best_left=-inf;
        int sum=0;
        for(int i=mid;i>=0;i--){sum+=v[i];best_left=max(best_left,sum);}
        int best_right=-inf;
        sum=0;
        for(int i=mid+1;i<n;i++){sum+=v[i];best_right=max(best_right,sum);}
        vector<int>l(v.begin(),v.begin()+mid+1);
        vector<int>r(v.begin()+mid+1,v.end());
      return max({maxSubArray(l),maxSubArray(r),best_left+best_right});
        
    }
};
