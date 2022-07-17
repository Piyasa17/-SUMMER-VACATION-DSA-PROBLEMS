/* QUESTION :- Union of Two Linked Lists */

/* DESCRIPTION :- Given two linked lists, your task is to complete the function makeUnion(), that returns the union of two linked lists. 
    This union should include all the distinct elements only. */

/* SAMPLE INPUT OUTPUT */
/* 
  EXAMPLE 1 :-
  Input:
    L1 = 9->6->4->2->3->8
    L2 = 1->2->8->6->2
    Output: 1 2 3 4 6 8 9
*/

/* Your Task:
The task is to complete the function makeUnion() which makes the union of the given two lists and returns the head of the new list.

Note: The new list formed should be in non-decreasing order.

Expected Time Complexity: O(N * Log(N))
Expected Auxiliary Space: O(N)

Constraints:
1 */

//CODE
// { Driver Code Starts
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* makeUnion(struct Node* head1, struct Node* head2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        printList(makeUnion(first,second));
    }
    return 0;
}

// } Driver Code Ends


/*
// structure of the node is as follows

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    unordered_map<int,int> mp;
    struct Node *r=head1;
    while(r->next!=NULL){
        r=r->next;
    }
    r->next=head2;
    struct Node *p=head1;
    while(p!=NULL){
        mp[p->data]++;
        p=p->next;
    }
    vector<int> aux;
    for(auto i=mp.begin();i!=mp.end();i++){
        if(mp[i->first]){
            aux.push_back(i->first);
            mp[i->first]=0;
        }
    }
    sort(aux.begin(),aux.end());
    struct Node *a=head1;
    int j=0;
    while(j<aux.size()){
        a->data=aux[j];
        j++;
        if(j<aux.size())
            a=a->next;
    }
    a->next=NULL;
    return head1;
}
