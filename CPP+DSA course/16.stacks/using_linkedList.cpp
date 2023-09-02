#include<iostream>
#include<string>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

class stack{
    node* head;
    int capacity;
    int currSize;
    public:
    stack(int c){
        this->capacity=c;
        this->currSize=0;
        head=NULL;
    }

    bool isEmpty(){
        return this->head=NULL;
    }

    bool isFull(){
        return this->currSize==this->capacity;
    }
    void push(int data){
        if(this->currSize==this->capacity){
            cout<<"Overflow"<<endl;
            return ;
        }
        node* new_node=new node(data);
        new_node->next=this->head;
        this->head=new_node;
        this->currSize;
    }

    int pop(){
        if(this->head==NULL){
            cout<<"Underflow"<<endl;
            return INT8_MIN;
        }
        node* new_head=this->head->next;
        this->head->next=NULL;
        node* tobeRemoved=this->head;
        int result=tobeRemoved->data;
        delete tobeRemoved;
        this->head=new_head;
        return result;
    }
    int gettop(){
        if(this->head==NULL){
            cout<<"Underflow"<<endl;
            return INT8_MIN;
        }
        return this->head->data;
    }
    int size(){
        return this->currSize;
    }
    
};
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.gettop()<<endl;
    st.push(4);
    st.push(5);
    cout<<st.gettop()<<endl;
    st.push(8);
    // st.push(9);
    st.pop();
    st.pop();
    cout<<st.gettop()<<endl;
    return 0;
    
}