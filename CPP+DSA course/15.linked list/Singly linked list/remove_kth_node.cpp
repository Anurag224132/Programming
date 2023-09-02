// given the head of a linked list, remove the kth node from the end of the list and return its head;
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



// assuming k is always less then/equal length of linked list.
void removeKthNodeFromEnd(node* &head,int k){
    node* ptr1=head;
    node* ptr2=head;

    //move ptr2 by k steps ahead
    int count=k;
    while(k--){
        ptr2=ptr2->next;
    }

    if(ptr2==NULL){
        //k is equal to length of linked list 
        // we have to deleted head node
        node* temp=head;
        head=head->next;
        free(temp);
    }
    //now ptr2 is k steps ahead of ptr1
    // when ptr2 is at null(end of lilst),ptr1 will be at node to be deleted
    while(ptr2!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    //now ptr1 is pointing to the node before kth node from end
    // node to be deleted is ptr1->next
    node* temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
}






int main()
{
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5 );
    ll.display();
    removeKthNodeFromEnd(ll.head,2);
    ll.display();

   
    return 0;
}