/* QUESTION :- Kadane's Algorithm */

/* DESCRIPTION :- Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input:
  N = 5
  Arr[] = {1,2,3,-2,5}
  Output:
  9
  Explanation:
  Max subarray sum is 9
  of elements (1, 2, 3, -2, 5) which 
  is a contiguous subarray.
  
  EXAMPLE 2 :-
  Input:
  N = 4
  Arr[] = {-1,-2,-3,-4}
  Output:
  -1
  Explanation:
  Max subarray sum is -1 
  of element (-1)
*/

/* Your Task:
You don't need to read input or print anything. The task is to complete the function maxSubarraySum() which takes Arr[] and N as input parameters and returns the sum of subarray with maximum sum.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 106
-107 ≤ A[i] ≤ 107 */

//CODE
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        // Your code here
        long long s=0;
        long long m=-999999;
        for(int i=0;i<n;i++){
            s=s+arr[i];
            if(m<s)
                m=s;
            if(s<0)
                s=0;
        }
        return m;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
