//given 2 linked lists, tell if they are equal or not.Two linked lists are equal if they have the same data and the arrangement of data is also the same.
#include<iostream>
#include<string>
#include<vector>
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
bool checkEqualLinkedList(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    //at this point either ptr1 is null, or ptr2 is null,or both are null
    return(ptr1==NULL && ptr2==NULL );
}
int main(){
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();

    linkedlist l2;
    l2.insertAtTail(1);
    l2.insertAtTail(2);
    l2.insertAtTail(3);
    l2.insertAtTail(4);
    l2.insertAtTail(5);
    l2.insertAtTail(6);
    l2.display();

    //<<checkEqualLinkedList(ll.head(),l2.head());
    return 0;
}


