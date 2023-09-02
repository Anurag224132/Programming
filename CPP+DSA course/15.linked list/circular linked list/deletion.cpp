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

    void deletAtEnd(){
        node*prev=head;
        while(prev->next->next!=head){
            prev=prev->next;
        }
        node*temp=prev->next;
        prev->next=head;
        free(temp);
        
    }

    void deleteAtpos(int k){
        node*prev=head;
        int curr=1;
        while(curr!=k-1){
            prev=prev->next;
            curr++;
        }
        node*temp=prev->next;
        prev->next=temp->next;
        free(temp);
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
    

    

};
int main()
{
    circularlinkedlist cll;
    cll.insertAtStart(7);
    cll.insertAtStart(6);
    cll.insertAtStart(5);
    cll.insertAtStart(4);
    cll.insertAtStart(3);
    cll.insertAtStart(2);
    cll.insertAtStart(1);
    cll.display();
    cll.princtCirculat();
    cll.deletAtStart();
    cll.display();
    cll.princtCirculat();
    cll.deletAtEnd();
    cll.display();
    cll.princtCirculat();
    cll.deleteAtpos(3);
    cll.display();
    cll.princtCirculat();
    return 0;
}