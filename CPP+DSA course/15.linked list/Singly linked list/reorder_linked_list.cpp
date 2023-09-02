// you are given the head of a sinly linked-list. The list can be represented as:
// L0->l1------>(ln-1) ->ln
// reorder the list to be on the following form:
// (l0)-(ln)-(l1)-(ln-1)->l2->(ln-2)----------
#include<iostream>
#include<string>
#include<vector>
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
node* reorder(node* &head){
    // finding the middle element
    node* slow=head;
    node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    // now slow is pointing to the middle element
    // 2. seperate the linked list and reverse second half;
    node* curr=slow->next;
    slow->next=NULL;
    node* prev=slow;
    while(curr){
        node* nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }

    // 3.merging the two half of the linked list
    node* ptr1=head;  // linked list first half
    node* ptr2=prev;  // linked list second half
    while(ptr1!=ptr2){
        node* temp=ptr1->next;
        ptr1->next=ptr2;
        ptr1=ptr2;
        ptr2=temp;
    }
    return head;
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
    ll.insertAtTail(8);
    ll.display();

    ll.head=reorder(ll.head);
    ll.display();
    return 0;
}