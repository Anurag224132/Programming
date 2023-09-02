// Ginven a linked list , swap every two adajecent nodes and return its head. You 
// may not modify the values in the lists nodes. only nodes themselves may be changed.
#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;

    node(int data){
        val=data;
        next=NULL;
    }
};
class linkedlist{
    public:
    node* head;

    linkedlist(){
        head=NULL;
    }

    void insertAtTail(int val){
        node* new_node=new node(val);
        if(head==NULL){
            head=new_node;
            return ;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;

    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
node* swapAdjacet(node* &head){
    // base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    // recursive case
    node* secondnode=head->next;
    head->next=swapAdjacet(secondnode->next);
    secondnode->next=head;
    return secondnode;
}

int main(){
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    //ll.insertAtTail(8);
    ll.display();
    ll.head=swapAdjacet(ll.head);
    ll.display();
    return 0;
}