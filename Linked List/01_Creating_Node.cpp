#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int val;
    Node* next;
    
    // Node(int data){
    //     this->data=data;
    //     this->next=NULL;
    // }
};
 
int main(){

ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    
   Node a,b,c;
   a.val=10;
   b.val=20;
   c.val=30;

   a.next=&b;
   b.next=&c;
   c.next=NULL;
   cout<<a.val<<" "<<b.val<<" "<<c.val<<endl;
   cout<<a.next->val<<" "<<b.next->val<<" "<<c.next<<endl;
   
   cout<<a.next<<endl;
   cout<<b.next<<endl;
   cout<<c.next<<endl;

    return 0;
}
