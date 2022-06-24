/* QUESTION :- Kth Smallest Element in a Sorted Matrix */

/* DESCRIPTION :- Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.
  Note that it is the kth smallest element in the sorted order, not the kth distinct element.
  You must find a solution with a memory complexity better than O(n2) */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
  Output: 13
  Explanation: The elements in the matrix are [1,5,9,10,11,12,13,13,15], and the 8th smallest number is 13
  
  EXAMPLE 2 :-
  Input: matrix = [[-5]], k = 1
  Output: -5
*/

/* Your Task:
  Constraints:
  n == matrix.length == matrix[i].length
  1 <= n <= 300
  -109 <= matrix[i][j] <= 109
  All the rows and columns of matrix are guaranteed to be sorted in non-decreasing order.
  1 <= k <= n2 */

//CODE
class Solution
{
public:
	int kthSmallest(vector<vector<int>>& matrix, int k)
	{
		int n = matrix.size();
		int le = matrix[0][0], ri = matrix[n - 1][n - 1];
		int mid = 0;
		while (le < ri)
		{
			mid = le + (ri-le)/2;
			int num = 0;
			for (int i = 0; i < n; i++)
			{
				int pos = upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
				num += pos;
			}
			if (num < k)
			{
				le = mid + 1;
			}
			else
			{
				ri = mid;
			}
		}
		return le;
	}
};
