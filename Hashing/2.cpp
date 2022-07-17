/* QUESTION :- Array Subset of another array */

/* DESCRIPTION :- Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. 
    Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
    Input:
    a1[] = {11, 1, 13, 21, 3, 7}
    a2[] = {11, 3, 7, 1}
    Output:
    Yes
    Explanation:
      a2[] is a subset of a1[]
  
  EXAMPLE 2 :-
    Input:
    a1[] = {1, 2, 3, 4, 5, 6}
    a2[] = {1, 2, 4}
    Output:
    Yes
    Explanation:
      a2[] is a subset of a1[]
*/

/* Your Task:
    You don't need to read input or print anything. Your task is to complete the function isSubset() which takes the array a1[], a2[], 
    its size n and m as inputs and return "Yes" if arr2 is subset of arr1 else return "No" if arr2 is not subset of arr1.

    Expected Time Complexity: O(n)
    Expected Auxiliary Space: O(n)

    Constraints:
    1 <= n,m <= 105
    1 <= a1[i], a2[j] <= 105
*/

//CODE
// { Driver Code Starts
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[a1[i]]++;
    for(int i=0;i<m;i++){
        if(mp[a2[i]]>0)
            continue;
        else
            return "No";
    }
    return "Yes";
}
