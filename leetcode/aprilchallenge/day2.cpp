/*     HAPPPY NUMBER

Write an algorithm to determine if a number n is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.
	 Input: 19
	 Output: true
 	Explanation: 
	 12 + 92 = 82
	 82 + 22 = 68
	 62 + 82 = 100
	 12 + 02 + 02 = 1
*/
/* This is having  a recursive and a iterative approach*/
class Solution {

    
    int explode(int n){//spliting the numbers into digits and returning the sum
       int sum=0;
        while(n){
            int x=n%10;
            
            n/=10;sum+=x*x;
        }
        return sum;
         
    }
    public:
    bool isHappy(int n) {
           unordered_set<int>s;//for storing the number that are visited and not visited
        while(true){
            if(n==1)return true;
               n=explode(n);
               if(s.count(n)==1)return false;//mean the number is in the set and give the same number after the explode function
               s.insert(n);
        }
    }
}; 
