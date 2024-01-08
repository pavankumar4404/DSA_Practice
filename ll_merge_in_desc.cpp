// Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
 
void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}
 
 
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}
 
// Driver code ends

class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        if(node1==NULL && node2==NULL){
            return NULL;
        }
// Merge sorting
        Node* h1=node1;
        Node* h2=node2;
        Node* newh;
        if(h1!=NULL && h2!=NULL){
            if(h1->data < h2->data){
                newh=h1;
                h1=h1->next;
            }
            else {
                newh=h2;
                h2=h2->next;
            }
            Node* temp=newh;
            while(temp->next!=NULL){
                if(h1->data < h2->data){
                    temp->next=h1;
                    h1=h1->next;
                }
                else{
                    temp->next=h2;
                    h2=h2->next;
                }
                temp=temp->next;
            }
            if(h2==NULL){
                temp->next=h1;
            }
            else{
                temp->next=h2;
            }
        }
        else if(h1==NULL){
            newh=h2;
        }
        else if(h2==NULL){
            newh=h1;
        }
        
// Reversing the list

        Node* cur=newh;
        Node* pre=NULL;
        Node* nxt=newh->next;
        while(nxt!=NULL){
            cur->next=pre;
            pre=cur;
            cur=nxt;
            nxt=nxt->next;
        }
        cur->next=pre;
        return cur;
    }  
};

//{ Driver Code Starts.
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;
 
        struct Node* headA=NULL;
        struct Node* tempA = headA;
 
        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);
            }else{
                tempA->next = newNode(ele);
                tempA=tempA->next;
            }
        }
 
        struct Node* headB=NULL;
        struct Node* tempB = headB;
 
 
        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);
 
            }else{
                tempB->next = newNode(ele);
                tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);
 
        print(result);
        cout<<endl;
 
 
    }
}
 
// } Driver Code Ends