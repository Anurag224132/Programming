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

    void insertathead(int val){
        node* new_node=new node(val);
        new_node->next=head;
        head=new_node;
    }

    void insertAtTail(int val){
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

    void insertAtPos(int val,int p){
        int curr=1;
        node* temp=head;
        while(curr!=p-1){
            temp=temp->next;
            curr++;
        }
        node* new_node=new node(val);
        //node*prev=temp->next;
        new_node->next=temp->next;
        temp->next=new_node;
    }

};
int main(){
    linkedlist ll;
    ll.insertAtTail(10);
    ll.insertAtTail(15);
    ll.insertAtTail(20);
    ll.insertAtTail(25);
    ll.insertAtTail(30);
    cout<<"Initial list:         ";
    ll.display();

    ll.insertathead(100);
    cout<<"Insert 100 at head:   ";
    ll.display();

    ll.insertAtTail(200);
    cout<<"Insert 200 at tail:   ";
    ll.display();

    ll.insertAtPos(18,4);
    cout<<"Final list:           ";
    ll.display();
    

    
    return 0;
}