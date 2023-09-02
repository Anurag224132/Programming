// given 2 sorted linked lists , merge them into 1 singly linked list such that the resulting list is also sorted.
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

node* mergedlinked(node* &head1,node* &head2){
    node* dummyHeadnode=new node(-1);
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=dummyHeadnode;
    while(ptr1&& ptr2){
        if(ptr1->val<ptr2->val){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    if(ptr1){
        ptr3->next=ptr1;
    }
    else{
        ptr3->next=ptr2;
    }

    return dummyHeadnode->next;
}

int main()
{
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(8 );
    ll.display();

    linkedlist l1;
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5 );
    l1.display();

    linkedlist l2;
    l2.head=mergedlinked(ll.head,l1.head);
    l2.display();
   
    return 0;
}