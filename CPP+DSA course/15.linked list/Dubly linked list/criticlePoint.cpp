// A critical point in a linkedlist is defined as either a local maxima or a local minima. Given a linked list tail, return an array of length 2 containing[minDistance,maxDistance] 
// where minDistance is the minimum distance between any two distinct critical points and maxDistance is the
// maxDistance between any two distinct critical points. if there are fewer than two critical points, 
// return[-1,-1].
// NOTE:-note that  a node can only be a local maxima/minima if there exits both a previous node and a next
// node.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class node{
    public:
    int val;
    node* prev;
    node* next;

    node(int data){
        val=data;
        prev=NULL;
        next=NULL; 
    }
};

class doublylinkedlist{
    public:
    node* head;
    node* tail;

    doublylinkedlist(){
        head=NULL;
        tail=NULL;
    }

    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void inserAtLast(int val){
        node* new_node=new node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return ;
    }
   
    
};
bool isCriticalPoint(node* &currNode){
    if(currNode->prev->val<currNode->val&& currNode->next->val>currNode->val){
        return true;
    }
    if(currNode->prev->val>currNode->val&& currNode->next->val<currNode->val){
        return true;
    }
    return false;

}
 vector<int> distanceBetweenCriticalPoints(node* head,node* tail){
    vector<int> ans(2,INT8_MAX);
    int firstCP=-1,lastCP=-1;
    node* currNode=tail->prev;
    if(currNode==NULL){
        ans[0]=ans[1]=-1;
        return ans;
    }

    int currPos=0;
    while(currNode->prev!=NULL){
        if(isCriticalPoint(currNode)){
            if(firstCP==-1){
                firstCP=currPos;

            }
            else{
                ans[0]=min(ans[0],currPos-lastCP);  //min distance
                ans[1]=currPos-firstCP;  // max distance
                lastCP=currPos;
            }
        }
        currPos++;
        currNode=currNode->prev;
    }
    if(ans[0]==INT8_MAX){
        ans[0]=ans[1]=-1;
    }

    return ans;
}


int main(){
    doublylinkedlist dll;
    dll.display();
    dll.inserAtLast(1);
    dll.inserAtLast(5);
    dll.inserAtLast(2);
    dll.inserAtLast(6);
    dll.inserAtLast(3);
    //dll.inserAtLast(6);
    dll.display();

    vector<int>ans=distanceBetweenCriticalPoints(dll.head,dll.tail);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}