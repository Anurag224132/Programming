// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;
class node
{
public:
    double val;
    node *next;

    node(double data)
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

    void insert(double val)
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

    float display(int k)
    {
        node *temp = head;
        int curr = 0;
        if (k == 0)
        {
            return head->val;
        }
        else
        {
            while (curr != k )
            {
                temp = temp->next;
                curr++;
            }
            return temp->val;
        }
    }

    void del(int k)
    {
        node *temp = head;
        int curr = 0;
        while (curr < k - 1)
        {
            temp = temp->next;
        }
        node *d = temp->next;
        temp->next = temp->next->next;
        free(d);
    }
};
int main()
{
    linkedlist l1;
    linkedlist l2;
    int n;
    cin >> n;
    int m = n;
    while (n)
    {
        n--;
        double ele;
        cin >> ele;
        l1.insert(ele);
        double amount;
        cin >> amount;
        l2.insert(amount);
    }
    int idx;
    cin >> idx;
    if (idx > m - 1)
    {
        cout << "Invalid index.";
    }
    else
    {
        l1.del(idx);
        l2.del(idx);
        int i = 0;
        while (i < m - 1)
        {
            cout << "Index " << i << ": " << "Transaction ID: "<<l1.display(i) << ", Amount: ";
            double ll=l2.display(i);
            cout<<fixed<<setprecision(2)<<ll<<endl;
            i++;
        }
    }
}