/*Problem->     Single  NUMBER
  Given a non-empty array of integers, every element appears twice except for one. Find that single one.
	Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?	
       Input: [2,2,1]
        Output: 1*/
//MY CODE
/* BOTH the Operation are done in o(N)*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        int x=0;
	/* Using BIT operations in k sets*/      
 for(auto y:nums){
            x^=y;
        }
	/* using MAP datastructure*/
	map<int,int> m;
       for(int i=0;i<nums.size();i++){
             m[nums[i]]++;
         }
         for(auto it:m){
             if(it.second==1)x=it.first;
        // }
        return x;
    }
};
