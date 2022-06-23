/* QUESTION :- 3 Sum */

/* DESCRIPTION :- Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. 
Return the sum of the three integers.
Assume that there will only be one solution */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  given array S = {-1 2 1 -4}, 
  and target = 1.
  The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)
*/

/* NOTE:
  You only need to implement the given function. Do not read input, instead use the arguments to the function. 
  Do not print the output, instead return values as specified. Still have a question? Checkout Sample Codes for more details.
 */

//CODE
int Solution::threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(),nums.end());
        int n=nums.size();
        int diff=0,sum;
        int m=INT_MAX;
        int ans;
        for(int i=0;i<n;i++){
            int x=nums[i];
            int l=i+1;
            int h=n-1;
            while(l<h){
                sum=x+nums[l]+nums[h];
                diff=abs(sum-target);
                if(sum==target)
                    return target;
                else if(diff<m){
                    ans=sum;
                    m=diff;
                }
                else if(sum<target)
                    l++;
                else
                    h--;
            }
        }
        return ans;
}
