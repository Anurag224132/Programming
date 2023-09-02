#include<iostream>
#include<string>
#include<vector>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node* prev;

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

    void inserAtStart(int val){
        node* new_node=new node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return ;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return ;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void deleteAtStart(){
        if(head==NULL){
            return ;
        }
        node* temp=head;
        head=temp->next;
        if(head==NULL){
            tail=NULL;
        }else{
            head->prev=NULL;
        }
        
        free(temp);
        return;
    }

    void delteAtEnd(){
        if(head==NULL){
            return ;
        }
        node* temp=tail;
        tail=tail->prev;
        // tail->prev->next=NULL;
        // tail->prev->prev=tail->prev->prev->prev;
        if(tail==NULL){
            head=NULL;
        }else{
            tail->next=NULL;
        }
        free(temp);
        return;
    }
    void deleteAtPosition(int pos){
        int curr=1;
        node* temp=head;
        while(curr<pos){
            temp=temp->next;
            curr++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        return;

    }
};
int main(){
    doublylinkedlist dll;
    dll.inserAtStart(1);
    dll.inserAtStart(2);
    dll.inserAtStart(3);
    dll.inserAtStart(4);
    dll.inserAtStart(5);
    dll.display();
    // dll.deleteAtStart();
    // dll.display();

    // dll.delteAtEnd();
    // dll.display();

    dll.deleteAtPosition(3);
    dll.display();
    return 0;
}