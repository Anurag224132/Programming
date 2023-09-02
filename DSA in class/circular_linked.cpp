#include<iostream>
#include<string>
#include<vector>
using namespace std;
class node{
    public:
    int val;
    node* next;

    node(int data){
        val =data;
        next=NULL;
    }
};
class circulerLinkedlist{
    public:
    node*head;

    circulerLinkedlist(){
        head=NULL;
    }

    void insertathead(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }
        node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void display()
    {
        node *temp = head;
        do
        {
            cout << temp->val << "->";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};
int main(){
    circulerLinkedlist cll;
    cll.insertathead(5);
    cll.display();
    cll.insertathead(4);
    cll.display();
    cll.insertathead(3);
    cll.display();
    cll.insertathead(2);
    cll.display();
    cll.insertathead(1);
    cll.display();
    return 0;
}