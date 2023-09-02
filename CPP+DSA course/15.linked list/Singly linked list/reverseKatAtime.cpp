// given the head of a linked list,reverse the nodes of the list k at a time, and return the  modified list.
// if k=2;
// input:  1-2-3-4-5-6
// output: 2-1-4-3-6-5
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

node* reversekll(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;

    int counter=0; // for counting first k nodes 
    while(currptr!=NULL && counter<k){
        node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        counter++;
    }

    if(currptr!=NULL){
        node* new_head=reversekll(currptr,k);
        head->next=new_head;
    }
    return prevptr;
}

int main()
{
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();

    ll.head=reversekll(ll.head,2);
    ll.display();


   
    return 0;
}