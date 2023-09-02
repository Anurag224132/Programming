// given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
#include <iostream>
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

class linkedlist
{
public:
    node *head;

    linkedlist()
    {
        head = NULL;
    }

    void insertAtTail(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void deleteduplicate(node *&head)
{
    node *curr_node = head;
    while (curr_node)
    {
        while (curr_node->next != NULL && curr_node->val == curr_node->next->val)
        {
            // delete curr->next
            node *temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        // this loop ends when current node and next node values are different
        // or linked list ends
        curr_node = curr_node->next;
    }
}
int main()
{
    linkedlist ll;
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(8);
    ll.insertAtTail(5);
    // ll.insertAtTail(3);
    // ll.insertAtTail(4);
    // ll.insertAtTail(4);
    ll.display();
    deleteduplicate(ll.head);
    ll.display();

    return 0;
}