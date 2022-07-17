/* QUESTION :- Top K Frequent Elements in Array  */

/* DESCRIPTION :- Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. 
    If two numbers have the same frequency then the larger number should be given preference. 

    Note: Print the elements according to the frequency count (from highest to lowest) and if the frequency is equal then larger number will be given preference. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
    Input:
    N = 6
    nums = {1,1,1,2,2,3}
    k = 2
    Output: {1, 2}
  
  EXAMPLE 2 :-
    Input:
    N = 8
    nums = {1,1,2,2,3,3,3,4}
    k = 2
    Output: {3, 2}
    Explanation: Elements 1 and 2 have the
      same frequency ie. 2. Therefore, in this
      case, the answer are 
    4 2 8 7 10 9.
*/

/* Your Task:
The task is to complete the function topK() that takes the array and integer k as input and returns a list of top k frequent elements.

Expected Time Complexity : O(NlogN)
Expected Auxilliary Space : O(N)

Constraints:
1 <= N <= 1057 */

//CODE
// { Driver Code Starts
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    static bool comp(pair<int, int> p1, pair<int, int> p2){
        if (p1.second == p2.second) 
            return p1.first > p2.first;
        return p1.second > p2.second;
    }
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        vector<pair<int,int>> f(mp.begin(),mp.end());
        sort(f.begin(),f.end(),comp);
        vector<int> res;
        for(int i=0;i<k;i++)
            res.push_back(f[i].first);
        return res;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
