/* QUESTION :- Nth node from end of linked list  */

/* DESCRIPTION :- Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input:
  N = 2
  LinkedList: 1->2->3->4->5->6->7->8->9
  Output: 8
  Explanation: In the first example, there
  are 9 nodes in linked list and we need
  to find 2nd node from end. 2nd node
  from end os 8.  
  
  EXAMPLE 2 :-
  Input:
  N = 5
  LinkedList: 10->5->100->5
  Output: -1
  Explanation: In the second example, there
  are 4 nodes in the linked list and we
  need to find 5th from the end. Since 'n'
  is more than the number of nodes in the
  linked list, the output is -1.
*/

/* Your Task:
  The task is to complete the function getNthFromLast() which takes two arguments: reference to head and N 
    and you need to return Nth from the end or -1 in case node doesn't exist..
  Expected Time Complexity: O(N).
  Expected Auxiliary Space: O(1). */

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


 // } Driver Code Ends
//User function Template for C

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(struct Node *head, int n)
{
    struct Node *p;
    p=head;
    int c=0;
    while(p!=NULL){
        p=p->next;
        c++;
    }
    if(n>c)
        return -1;
    struct Node *rp=head;
    int x=c-n;
    while(x){
        rp=rp->next;
        --x;
    }
    return rp->data;
}

// { Driver Code Starts.



int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      int n,k;
      scanf("%d",&n);
      scanf("%d",&k);
      insert(n);
      int res = getNthFromLast(start,k);
      printf("%d\n",res);
    }
    return 0;

}


 void insert(int n)
 {   int value,i;
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
 




  // } Driver Code Ends
