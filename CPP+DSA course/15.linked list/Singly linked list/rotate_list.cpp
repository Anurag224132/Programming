// given the head of a linked list, rotate the list to the right by k place.
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
node* rotate(node* &head,int k){
    int n=0;
    node* tail= head;
    while(tail->next){
        n++;
        tail=tail->next;
    }
    n++;
    k=k%n;
    if(k==0){
        return head;
    }

    tail->next=head;
    node* temp=head;
    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }
    node* newhead=temp->next;
    temp->next=NULL;
    return newhead;
    
}
int main(){

    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);

    int k;
    cout<<"Enter k ";
    cin>>k;
    ll.display();
    ll.head=rotate(ll.head,k);
    ll.display();

    return 0;
}