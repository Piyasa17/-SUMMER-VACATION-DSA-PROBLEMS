/* QUESTION :- Sort an array of 0s, 1s and 2s */

/* DESCRIPTION :- Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input: 
  N = 5
  arr[]= {0 2 1 2 0}
  Output:
  0 0 1 2 2
  Explanation:
  0s 1s and 2s are segregated 
  into ascending order.
    
  EXAMPLE 2 :-
  Input: 
  N = 3
  arr[] = {0 1 0}
  Output:
  0 0 1
  Explanation:
  0s 1s and 2s are segregated 
  into ascending order.
*/

/* Your Task:
Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() that takes an array arr and N as input parameters and sorts the array in-place.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2 */

//CODE

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int f[3]={0};
    for(int i=0;i<n;i++){
        f[a[i]]++;
    }
    int j=0;
    for(int i=0;i<3;i++){
        while(f[i]){
            a[j]=i;
            j++;
            f[i]--;
        }
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends
