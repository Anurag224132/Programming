#include<iostream>
#include<string>
#include<vector>
using namespace std;
class node{
    public:
    int val;
    node* prev;
    node* next;

    node(int data){
        val=data;
        prev=NULL;
        next=NULL; 
    }
};

class doublylinkedlist{
    public:
    node* head;
    node* tail;

    doublylinkedlist(){
        head=NULL;
        tail=NULL;
    }

    void insertAtStart(int val){
        node* new_node=new node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return ;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void reverse(){
        node* curr=head;
        while(curr){
            node* next=curr->next; 
            curr->next=curr->prev;
            curr->prev=next;
            curr=next;

        }
        node* newhead=tail;
        tail=head;
        head=newhead;
        
    }

    

    
};
int main(){
    doublylinkedlist dll;
    dll.insertAtStart(7);
    dll.insertAtStart(6);
    dll.insertAtStart(5);
    dll.insertAtStart(4);
    dll.insertAtStart(3);
    dll.insertAtStart(2);
    dll.insertAtStart(1);
    dll.display();

    dll.reverse();
    dll.display();
    
    return 0;
}