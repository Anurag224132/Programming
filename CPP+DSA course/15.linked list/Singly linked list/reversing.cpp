// given the head of a singly linked list,reverse the list, and return the reverse list.
// given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int data)
    {
        val = data;
        next = NULL;
    }
};

class linkedlist
{
public:
    node *head;

    linkedlist()
    {
        head = NULL;
    }

    void insertAtTail(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

node*reverseLL(node* &head){
    node* prevptr=NULL;
    node* currptr=head;

    //currptr->next=prevptr;
    // move all 3 ptrs by one step ahead
    while(currptr!=NULL){
        node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }

    // when this loop ends ,prevptr pointing to my last node which is new head
    node*new_head=prevptr;
    return new_head;
}

// USING RECURSION
node* reversellrecursion(node* &head){

    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    
    //recursive case
    node* new_head=reversellrecursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head;
}


int main()
{
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();

    ll.head=reversellrecursion(ll.head);
    ll.display();


    return 0;
}