/* QUESTION :- Balanced Parantheses! */

/* DESCRIPTION :- Given a string A consisting only of '(' and ')'.
  You need to find whether parantheses in A is balanced or not ,if it is balanced then return 1 else return 0. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
    Input:
    A = "(()())"
    Output: 1
  
  EXAMPLE 2 :-
    Input:
    A = "(()"
    Output: 0
*/

/* Your Task:
  Constraints:
    1 <= |A| <= 105 */

//CODE
// { Driver Code Starts
int Solution::solve(string a) {
    int n=a.size();
    if(n%2==1)
        return 0;
    stack<char> s;
    s.push(a[0]);
    for(int i=1;i<n;i++){
        if(!s.empty()){
            if(s.top()=='('){
                if(a[i]==')')
                    s.pop();
                else
                    s.push(a[i]);
            }
        }
        else
            s.push(a[i]);
    }
    if(s.empty())
        return 1;
    return 0;
}
