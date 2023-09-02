// given head, the head of a linked list ,determine if the linked list has a cycle in it.
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

bool detctedCycle(node* head){
    if(!head){
        return false;
    }
    node* slow=head;
    node* fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            //cout<<slow->val<<end;
            cout<<slow->val<<endl;
            return true;
        }
    }
    return false;
}
int main(){
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    //ll.display();
    ll.head->next->next->next->next->next->next=ll.head->next->next->next;
    cout<<detctedCycle(ll.head)<<endl;
    return 0;
}