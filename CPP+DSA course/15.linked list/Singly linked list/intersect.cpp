// given the heads of two singly linked list headA and headB, return the node at
// which the two lists intersects. If the two linked lists have no interecton at all,
// return null.
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


void reversePrint(node* head){
    if(head==NULL) return;

    reversePrint(head->next);
    cout<<head->val<<" ";
}


int getlength(node* head){
    node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

node* moveheadbyk(node* head,int k){
    node* ptr=head;
    while(k--){
        ptr=ptr->next;
    }
    return ptr;
}
node* getintersection(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    // step1:calculate lengths of both linked lists
    int l1=getlength(head1);
    int l2=getlength(head2);

    //step2: find difference k between linkedlists and move longer linkedlists ptr by k steps
    if(l1>l2){
        int k=l1-l2;
        ptr1=moveheadbyk(head1,k);
        ptr2=head2;
    }else{
        int k=l2-l1;
        ptr1=head1;
        ptr2=moveheadbyk(head2,k);
    } 

    //step3: compare ptr1 and ptr2 nodes
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    } 
    return NULL;

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

    linkedlist l2;
    l2.insertAtTail(6);
    l2.insertAtTail(7);
    l2.head->next->next=ll.head->next->next->next;
    l2.display();


    node* intersection=getintersection(ll.head,l2.head);
    if(intersection){
        cout<<intersection->val<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}