/* QUESTION :- Remove Duplicates from Sorted Array */

/* DESCRIPTION :- Given a sorted array A consisting of duplicate elements.

  Your task is to remove all the duplicates and return a sorted array of distinct elements consisting of all distinct elements present in A.
  But, instead of returning an answer array, you have to rearrange the given array in-place such that it resembles what has been described above.
  Hence, return a single integer, the index(1-based) till which the answer array would reside in the given array A.
  Note: This integer is the same as the number of integers remaining inside A had we removed all the duplicates.
  Look at the example explanations for better understanding. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input:
  A = [1, 1, 2]
  Output:
  2
  Explanation:
  Updated Array: [1, 2, X] after rearranging. Note that there could be any number in place of x since we dont need it.
  We return 2 here.
  
  EXAMPLE 2 :-
  Input:
  A = [1, 2, 2, 3, 3]
  Output:
  3
  Explanation:
  Updated Array: [1, 2, 3, X, X] after rearranging duplicates of 2 and 3.
  We return 3 from here.
*/

/* NOTE:
  You only need to implement the given function. Do not read input, instead use the arguments to the function. 
  Do not print the output, instead return values as specified. Still have a question? Checkout Sample Codes for more details.
*/

//CODE
int Solution::removeDuplicates(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i;
    int n=a.size();
    int c=0;
    for(i=1;i<n;i++){
        if(a[i]==a[i-1])
            c++;
        else
            a[i-c]=a[i];
    }
    return n-c;
}
