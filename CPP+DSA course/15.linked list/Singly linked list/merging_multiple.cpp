// you are given an array of k linked lists each linked list is sorted in ascending order. merge all the linked lists into one sorted linked list and return it.
// given 2 sorted linked lists , merge them into 1 singly linked list such that the resulting list is also sorted.
#include <iostream>
#include<vector>
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

node* mergedlinked(node* &head1,node* &head2){
    node* dummyHeadnode=new node(-1);
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=dummyHeadnode;
    while(ptr1&& ptr2){
        if(ptr1->val<ptr2->val){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }
    if(ptr1){
        ptr3->next=ptr1;
    }
    else{
        ptr3->next=ptr2;
    }

    return dummyHeadnode->next;
}
node* mergeKLinkedlist(vector<node*> &lists){

    if(lists.size()==0){
        return NULL;
    }
    while(lists.size()>1){
        node* mergedHead=mergedlinked(lists[0],lists[1]);
        lists.push_back(mergedHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
}

// vecotr->head1 head2 head3 head4
//1.head1 and head2 ll will be merged
// vecotr-> head3 head4 mergedhead1_2
// 2. head3 and head4 will be merged
// vecotor-> mergedhead1_2 mergedhead3_4
//3. mergedhead1_2 and mergedhead3_4 will be merged
// vector-> mergedhead1_2_3_4



int main()
{
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(8 );
    ll.display();

    linkedlist l1;
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5 );
    l1.display();

    linkedlist l3;
    l3.insertAtTail(9);
    l3.insertAtTail(10);
    l3.insertAtTail(11);
    l3.display();

    vector<node*> lists;
    lists.push_back(ll.head);
    lists.push_back(l1.head);
    lists.push_back(l3.head);

    linkedlist mergedLL;
    mergedLL.head=mergeKLinkedlist(lists);
    mergedLL.display();
   
    return 0;
}