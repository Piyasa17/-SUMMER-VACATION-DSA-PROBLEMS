/* QUESTION :- Reverse a linked list */

/* DESCRIPTION :- Given a linked list of N nodes. The task is to reverse this list. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input:
  LinkedList: 1->2->3->4->5->6
  Output: 6 5 4 3 2 1
  Explanation: After reversing the list, 
  elements are 6->5->4->3->2->1.
  
  EXAMPLE 2 :-
  Input:
  LinkedList: 2->7->8->9->10
  Output: 10 9 8 7 2
  Explanation: After reversing the list,
  elements are 10->9->8->7->2.
*/

/* Your Task:
  The task is to complete the function reverseList() with head reference as the only argument and should return new head after reversing the list.
  Expected Time Complexity: O(N).
  Expected Auxiliary Space: O(1).
  Constraints:
  1 <= N <= 104 */

//CODE
// { Driver Code Starts
//Initial Template for C
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert();
void display(struct Node *head);

 // } Driver Code Ends
//User function Template for C

struct Node* reverseList(struct Node *head)
    {
        struct Node *prev=NULL;
        struct Node *curr=head;
        struct Node *next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }

// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      start = reverseList(start);
      display(start);
      printf("\n");
    }
    return 0;

}


 void insert()
 {
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
 
 void display(struct Node *head)
{
   while(head!=NULL)
  {
   printf("%d ",head->data);
    head=head->next;
  }
}




  // } Driver Code Ends
