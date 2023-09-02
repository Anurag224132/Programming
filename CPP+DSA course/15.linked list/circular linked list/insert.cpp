#include <iostream>
#include <string>
#include <vector>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int data)
    {
        val = data;
        next = NULL;
    }
};

class circularlinkedlist
{
public:
    node *head;

    circularlinkedlist()
    {
        head = NULL;
    }

    void insertAtStart(int val)
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
    void princtCirculat()
    {
        node *temp = head;
        for (int i = 0; i < 15; i++)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << endl;
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

    void intsertAtpos(int val,int k){
        node* new_node=new node(val);
        node* temp=head;
        int curr=1;
        while(curr!=k-1){
            temp=temp->next;
            curr++;
        }
        node* prev=temp->next;
        temp->next=new_node;
        new_node->next=prev;

    }
};
int main()
{
    circularlinkedlist cll;
    cll.insertAtStart(3);
    cll.insertAtStart(2);
    cll.insertAtStart(1);
    cll.display();
    cll.princtCirculat();
    cll.insertAtEnd(4);
    cll.display();
    cll.intsertAtpos(8,3);
    cll.display();
    return 0;
}