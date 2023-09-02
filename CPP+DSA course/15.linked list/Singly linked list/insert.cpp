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

void insertAtHead(node* &head,int val){
    node* new_node=new node(val);
    new_node->next=head;
    head=new_node;
}
void insertAtTail(node* &head,int val){
    node* new_node=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    // temp has reached last node
    temp->next=new_node;
}

void insertAtPosition(node* &head,int val,int pos){
    if(pos==0){
        insertAtHead(head,val);
        return ;
    }

    node* new_node=new node(val);
    node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }

    // temp is pointing to node to pos-1
    new_node->next=temp->next;
    temp->next=new_node;
}

void update(node* &head,int pos,int val){
    node* temp=head;
    int current_pos=0;
    while(current_pos!=pos){
        temp=temp->next;
        current_pos++;
    }
    temp->val=val;
}

void deletehead(node* &head){
    node* temp=head;
    head=head->next;
    free(temp);
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head=NULL;

    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);

    insertAtTail(head,4);
    display(head);

    insertAtPosition(head,3,2 );
    display(head);

    update(head,0,10);
    display(head);

    deletehead(head);
    display(head);
    return 0;
}