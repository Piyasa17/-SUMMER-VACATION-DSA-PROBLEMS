/* QUESTION :- Largest subarray of 0's and 1's */

/* DESCRIPTION :- Given an array of 0s and 1s. Find the length of the largest subarray with equal number of 0s and 1s. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input:
  N = 4
  A[] = {0,1,0,1}
  Output: 4
  Explanation: The array from index [0...3]
  contains equal number of 0's and 1's.
  Thus maximum length of subarray having
  equal number of 0's and 1's is 4.
  
  EXAMPLE 2 :-
  Input:
  N = 5
  A[] = {0,0,1,0,0}
  Output: 2
*/

/* Your Task:
You don't need to read input or print anything. Your task is to complete the function maxLen() which takes the array arr[] and the size of the array as inputs and returns the length of the largest subarray with equal number of 0s and 1s.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 105
0 <= A[] <= 1 */

//CODE
/// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int n)
    {
        // Your code here
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
                arr[i]=-1;
        }
        int sum=0;
        int m=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0)
                m=i+1;
            if(mp.find(sum)!=mp.end())
                m=max(m,i-mp[sum]);
            else
                mp[sum]=i;
        }
        return m;
    }
};


// { Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends
