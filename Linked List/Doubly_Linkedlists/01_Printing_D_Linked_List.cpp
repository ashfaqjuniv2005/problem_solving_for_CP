#include<bits/stdc++.h>
using namespace std;
       
 class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int val)
    {
        this->val=val;
        
        this->next=NULL;
        this->prev=NULL;

    }
};

     void printLinkedList(Node* &head){
        
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
     } 

     void printReverse(Node* &tail)
{
    Node* temp = tail;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;   // Move backward
    }
    cout << endl;
}
       
int main()
{


    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);
    head->next=a;
    a->next=tail;
    tail->prev=a;

    a->next=tail;
    tail->prev=a;
    a->prev=head;
    
    printLinkedList(head);

     printReverse(tail);
        
return 0;
}
