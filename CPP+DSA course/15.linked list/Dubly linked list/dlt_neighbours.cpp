// Given the head of a doubly linked list , delete the nodes whose neighbours have the same value. Traverse the list from the right to left.
#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node* prev;

    node(int data){
        val=data;
        next=NULL;
        prev=NULL;
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

    void inserAtLast(int val){
        node* new_node=new node( val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
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

    void dltNeg(){
        node* currnode=tail->prev;
        while(currnode!=head){
            node* prevnode=currnode->prev;
            node* nextnode=currnode->next;
            if(prevnode->val==nextnode->val){
                // i have to delete the curr node
                prevnode->next=nextnode;
                nextnode->prev=prevnode;
                free(currnode);
            }
            currnode=prevnode;
        }
    }
};
int main(){
    doublylinkedlist dll;
    dll.inserAtLast(1);
    dll.inserAtLast(2);
    dll.inserAtLast(3);
    dll.inserAtLast(4);
    dll.inserAtLast(3);
    dll.inserAtLast(2);
    dll.inserAtLast(1);
    //dll.inserAtLast(8);
    dll.display();
    dll.dltNeg();
    dll.display();
    return 0;
}