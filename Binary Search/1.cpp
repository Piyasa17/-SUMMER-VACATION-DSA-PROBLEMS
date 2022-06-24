/* QUESTION :- Search Insert Position */

/* DESCRIPTION :- Given a sorted array of distinct integers and a target value, return the index if the target is found. 
  If not, return the index where it would be if it were inserted in order.
  You must write an algorithm with O(log n) runtime complexity. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input:
  Input: nums = [1,3,5,6], target = 5
  Output: 2
  
  EXAMPLE 2 :-
  Input: nums = [1,3,5,6], target = 2
  Output: 1
  
  EXAMPLE 2 :-
  Input: nums = [1,3,5,6], target = 7
  Output: 4
*/

/* Your Task:
  Constraints:
  1 <= nums.length <= 104
  -104 <= nums[i] <= 104
  nums contains distinct values sorted in ascending order.
  -104 <= target <= 104 */

//CODE
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};
