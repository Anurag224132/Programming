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
class circularlinkedlist{
    public:
    node* head;

    circularlinkedlist(){
        head=NULL;
    }  

    void insertAtHead(int val){
        node* new_node=new node(val);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return;
        }
        node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=new_node;
        new_node->next=head;
        head=new_node;

    } 

    void display(){
        node* temp=head;
        do{
            cout<<temp->val<<"->";
            temp=temp->next;
        }while(temp!=head);
        cout<<endl;
    }
    void insertAtEnd(int val)
    {

        node *new_node = new node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }
        node *tail = head;
        while (tail->next !=head)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
    }
    void deletAtStart(){
        node* temp=head;
        node* tail= head;
        while(tail->next!=head){
            tail=tail->next;
        }
        head=temp->next;
        tail->next=head;
        free(temp);
    }
    void reverse(){
        node* prev=NULL;
        node* curr=head;
        while(curr!=NULL){
            node* nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        node*new_head=prev;
        return ;
    }
};
int main(){
    circularlinkedlist cll;
    cll.insertAtHead(5);
    cll.insertAtHead(4);
    cll.insertAtHead(3);
    cll.insertAtHead(2);
    cll.insertAtHead(1);
    cout<<"Your original linkedlist is :";
    cll.display();
    int n;
    cout<<"enter the element that you want to add at the begning of the circular linked list :";
    cin>>n;
    cll.insertAtEnd(n);
    cout<<"Your final linked list is :";
    cll.display();
    cll.deletAtStart();
    cout<<"Your linked list after deleting 1st element is :";
    cll.display();
    cll.reverse();
    cll.display();
    return 0;
}