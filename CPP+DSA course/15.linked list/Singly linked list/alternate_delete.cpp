// given the head of a linked list, delete every alternate element from the llist
// starting from the second element
#include<iostream>
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

    void insertAtTail(int value){
        node* new_node=new node(value);
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
        }cout<<"NULL"<<endl;
    }
};

void deleteAlternateNodes(node* &head){
    node* curr_node=head;
    while(curr_node!=NULL && curr_node->next!=NULL){
        node* temp=curr_node->next;
        curr_node->next=curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
    }
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
    deleteAlternateNodes(ll.head);
    ll.display();
    return 0;
}