/* QUESTION :- Sorting Elements of an Array by Frequency */

/* DESCRIPTION :- Given an array of integers, sort the array according to frequency of elements. 
    That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
    Input:
    N = 5
    A[] = {5,5,4,6,4}
    Output: 4 4 5 5 6
    Explanation: The highest frequency here is
    2. Both 5 and 4 have that frequency. Now
    since the frequencies are same then 
    smallerelement comes first. So 4 4 comes 
    firstthen comes 5 5. Finally comes 6.
    The output is 4 4 5 5 6.
  
  EXAMPLE 2 :-
    Input:
    N = 5
    A[] = {9,9,9,2,5}
    Output: 9 9 9 2 5
    Explanation: The highest frequency here is
    3. The element 9 has the highest frequency
    So 9 9 9 comes first. Now both 2 and 5
    have same frequency. So we print smaller
    element first.
    The output is 9 9 9 2 5.
*/

/* Your Task:
You only need to complete the function sortByFreq that takes arr, and n as parameters and returns the sorted array.

Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N). 

Constraints:
1 ≤ N ≤ 105
1 ≤ Ai ≤ 105 

 */

//CODE
// { Driver Code Starts
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    static bool comp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second==p2.second)
            return p1.first < p2.first;
        return p1.second > p2.second;
    }
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int a[],int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[a[i]]++;
        vector<pair<int,int>> f(mp.begin(),mp.end());
        sort(f.begin(),f.end(),comp);
        vector<int> res;
        for(int i=0;i<f.size();i++){
            while(f[i].second--)
                res.push_back(f[i].first);
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends
