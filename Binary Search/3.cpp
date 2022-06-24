/* QUESTION :-  Find Smallest Letter Greater Than Target */

/* DESCRIPTION :- Given a characters array letters that is sorted in non-decreasing order and a character target, 
    return the smallest character in the array that is larger than target.
      Note that the letters wrap around.
      For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input: letters = ["c","f","j"], target = "a"
  Output: "c"
  
  EXAMPLE 2 :-
  Input: letters = ["c","f","j"], target = "c"
  Output: "f"
*/

/* Your Task:
  Constraints:
  2 <= letters.length <= 104
  letters[i] is a lowercase English letter.
  letters is sorted in non-decreasing order.
  letters contains at least two different characters.
  target is a lowercase English letter. */

//CODE
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (letters.back() <= target) 
            return letters.front();
        int low=0;
        int high=letters.size()-1;
        while(low<high){
             auto mid = (low + high) / 2;
            if (target < letters[mid]) 
                high = mid;
            else 
                low = mid + 1;
        }
        return letters[low];
    }
};
