/* QUESTION :- Subarray with given sum */

/* DESCRIPTION :- Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.
  In case of multiple subarrays, return the subarray which comes first on moving from left to right. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input:
  N = 5, S = 12
  A[] = {1,2,3,7,5}
  Output: 2 4
  Explanation: The sum of elements 
  from 2nd position to 4th position 
  is 12.
  
  EXAMPLE 2 :-
  Input:
  N = 10, S = 15
  A[] = {1,2,3,4,5,6,7,8,9,10}
  Output: 1 5
  Explanation: The sum of elements 
  from 1st position to 5th position
  is 15.
*/

/* Your Task:
You don't need to read input or print anything. The task is to complete the function subarraySum() which takes arr, N and S as input parameters and returns an arraylist containing the starting and ending positions of the first such occurring subarray from the left where sum equals to S. The two indexes in the array should be according to 1-based indexing. If no such subarray is found, return an array consisting only one element that is -1.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 105
1 <= Ai <= 109
 */

//CODE
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int> res;
        long long sum=0;
        int i=0;
        int j=-1;
        while(j<n){
            if(sum==s){
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
            else if(sum<s){
                j++;
            }
            else{
                sum=sum-arr[i];
                i++;
                continue;
            }
            sum=sum+arr[j];
        }
        res.push_back(-1);
        return res;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
