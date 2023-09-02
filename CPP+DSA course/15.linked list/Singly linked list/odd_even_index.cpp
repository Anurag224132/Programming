// given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
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
node* oddEvenLinked(node* &head){
    node* oddptr=head;
    node* evenhead=head->next;
    node* evenptr=evenhead;
    while(evenptr && evenptr->next){
        oddptr->next=oddptr->next->next;
        evenptr->next=evenptr->next->next;
        oddptr=oddptr->next;
        evenptr=evenptr->next;
    }
    oddptr->next=evenhead;
    //evenhead->next=NULL;
    return head;
}
int main(){
    linkedlist ll;
    ll.inserAtTail(1);
    ll.inserAtTail(2);
    ll.inserAtTail(3);
    ll.inserAtTail(4);
    ll.inserAtTail(5);
    ll.inserAtTail(6);
    ll.inserAtTail(7);
    ll.inserAtTail(8);
    ll.display();

    ll.head=oddEvenLinked(ll.head);
    ll.display();


    return 0;
}