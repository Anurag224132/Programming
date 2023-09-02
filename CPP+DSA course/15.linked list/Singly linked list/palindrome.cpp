// Given, head, the head of a linked list,determine if the linked list is a palindrome or  not.
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

    void inserAtTail(int val){
        node* new_node=new node(val);
        if(head==NULL){
             head=new_node;
            return;
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

bool isPalinderome(node* head){
    // find middle element
    node* slow=head;
    node* fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    // now slow is pointing to middle element 
    // 2. break the linked list in the middle
    node* curr=slow->next;
    node* prev=slow;
    slow->next=NULL;

    // 3. reverse the second half of linked list
    while(curr){
        node* nextndoe=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextndoe;
    }

    //4. check if the two linked lists are equal
    node* head1=head;
    node* head2=prev;
    while(head2){
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}
int main(){
    linkedlist ll;
    ll.inserAtTail(1);
    ll.inserAtTail(2);
    ll.inserAtTail(3);
    //ll.inserAtTail(5);
    ll.inserAtTail(3);
    ll.inserAtTail(2);
    ll.inserAtTail(1);
    ll.display();
    cout<<isPalinderome(ll.head)<<endl;
    return 0;
}