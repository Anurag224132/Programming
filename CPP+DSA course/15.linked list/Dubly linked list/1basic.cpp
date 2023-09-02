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

    void inserAtLast(int val){
        node* new_node=new node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return ;
    }

    void insesrtAtPosition(int val,int pos){
        int curr=1;
        node* temp=head;
        node* new_node=new node(val);
        while(curr<pos-1){
            temp=temp->next;
            curr++;
        }
        new_node->next=temp->next;
        temp->next=new_node;
        new_node->prev=temp;
        new_node->next->prev=new_node;
        return ;
    }
};
int main(){
    doublylinkedlist dll;
    dll.insertAtStart(3);
    dll.insertAtStart(2);
    dll.insertAtStart(1);
    dll.display();
    dll.inserAtLast(4);
    dll.inserAtLast(6);
    dll.display();
    dll.insesrtAtPosition(5,4);
    dll.display();
    return 0;
}