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

    void InsertAtHead(int data){
        node* new_node=new node(data);
        new_node->next=head;
        head=new_node;
    }

    void insertAtTail(int val){
        node* new_node=new node(val);
        node* temp=head;
        if(head==NULL){
            head=new_node;
            return ;
        }
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

    void displaynode(){
        node* temp=head;
        int n=1;
        while(temp!=NULL){
            cout<<"NODE "<<n<<" is "<<temp->val<<" and there address is "<<temp->next;
            n++;
            temp=temp->next;
            cout<<endl;
        }
        
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
    }
};
// void reverse(node* &head){
//         node* prev=NULL;
//         node* curr=head;
//         while(curr!=NULL){
//             node* nextptr=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextptr;
//         }
//     }
int main(){
    linkedlist ll;
    int n;
    int count=0;
    cout<<"when you enter 0 then your linked list created"<<endl;
    cout<<"Enter the value ";
    while(n){
        cin>>n;
        count++;
        if(n!=0){
            ll.insertAtTail(n);

        }   
    }
    ll.display();
    // cout<<"Total number of nodes is present in this linked list ="<<count<<endl;
    // ll.displaynode();


    // int element;
    // cout<<"Enter elemnt which you want to add at the begning of the linked list ";
    // cin>>element;
    // ll.InsertAtHead(element);
    // ll.display();

    int element;
    cout<<"Enter elemnt which you want to add at the last of the linked list ";
    cin>>element;
    ll.insertAtTail(element);
    ll.display();

    //reverse(ll.head);
    ll.reverse();
    ll.display();
    return 0;
}