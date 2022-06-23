/* QUESTION :- Merge Two Sorted Lists II */

/* DESCRIPTION :- Given two sorted integer arrays A and B, merge B into A as one sorted array.
  Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.
  TIP: C users, please malloc the result into a new array and return the result.
  If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n 
*/

/* SAMPLE INPUT OUTPUT */
/* 
  Input : 
         A : [1 5 8]
         B : [6 9]

  Modified A : [1 5 6 8 9]
*/

/* Your Task:
  You only need to implement the given function. Do not read input, instead use the arguments to the function. 
  Do not print the output, instead return values as specified. Still have a question? Checkout Sample Codes for more details. 
*/

//CODE
void Solution::merge(vector<int> &a, vector<int> &b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n1=a.size();
    int n2=b.size();
    int n=(n1+n2);
    vector<int> aux;
    int i=0;
    int j=0;
    int l=n1-1;
    int h=n2-1;
    while(i<=l && j<=h){
        if(a[i]<b[j]){
            aux.push_back(a[i]);
            i++;
        }
        else{
            aux.push_back(b[j]);
            j++;
        }
    }
    while(i<=l){
        aux.push_back(a[i]);
        i++;
    }
    while(j<=h){
        aux.push_back(b[j]);
        j++;
    }
    a.clear();
    for(int i=0;i<n;i++){
        a.push_back(aux[i]);
    }
}
