//implementation of stacks using Linked List
#include<iostream>
using namespace std;

struct node{        //structure of a node
    int data;       //data field
    node *next;     //pointer to a next node

    node(int d){        //constructor that takes data arg
        data=d;
        next=NULL;      //points next to NULL
    }
};
struct stack{       //structure of a stack
    node* head;     //head pointer
    int size;
    stack(){        //constructor that creates an empty stack of size 0
        head=NULL;
        size=0;
    }
    //push() fucntion 
    void push(int data){        //takes data as arg
        node* newnode= new node(data);      //dynamic creation of a node
        newnode->next=head;     //points the next of newly created node to existing head
        head=newnode;       //newnode now becomes head
        size++;     //size incrementation
    }
    //pop() function
    int pop(){
        if(head==NULL){     //if stack is empty
            cout<<"Stack underflow!";
            return 0;
        }
        int nodedata=head->data;    //stores topmost value in 'nodedata' variable
        node *temp=head;        //creating a ptr 'temp' that points topmost element
        head=head->next;        //head shifts to next(second) element
        delete (temp);          //deletion of first/topmost element
        size--;     //decrement of size
        return nodedata;        //returning value
    }
    int sizestk(){
        return size;
    }
    bool isempty(){
        return(head==NULL);
    }
    int peek(){
        if(head==NULL){
            cout<<"Stack empty!";
            return 0;
        }
        return head->data;      //returning data of first element
    }
};

int main(){
    stack s;
    s.push(80);
    s.push(10);
    s.push(50);
    s.push(70);

    cout<<s.pop()<<endl;        //will print 70 since it is added last (LIFO method)
    cout<<s.sizestk()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;        //stack epty
    cout<<s.sizestk()<<endl;
    cout<<s.pop()<<endl;        //statck underflow
    
    return 0;
}
