// given the head of a doubly linkedl ist ,find if it's a palindrome or not.
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

    bool palindrom(){
        while(head!=tail && tail!=head->prev){
            if(head->val!=tail->val){
                return false;
            }
            else{
                head=head->next;
                tail=tail->prev;
            }
        }
        return true;

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
    cout<<dll.palindrom();
    return 0;
}