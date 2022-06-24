/* QUESTION :- Sqrt(x) */

/* DESCRIPTION :- Given a non-negative integer x, compute and return the square root of x.
  Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.
  Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input: x = 4
  Output: 2
  
  EXAMPLE 2 :-
  Input: x = 8
  Output: 2
  Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.
*/

/* Your Task:
  Constraints:  
  0 <= x <= 231 - 1  */

//CODE
class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
            return 0;
        long long low=1;
        long long high=x;
        int ans=-1;
        while(low<=high){
            long long mid=(low+high)/2;
            long long sq=mid*mid;
            if(sq==x)
                return mid;
            else if(sq>x)
                high=mid-1;
            else{
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};
