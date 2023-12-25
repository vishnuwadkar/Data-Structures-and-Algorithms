//Insertion in a linked list: Insertion at beginning

#include<bits/stdc++.h>
using namespace std;

class linkedlist{       //creating a class to implement the functions on the linked list
    struct node{        //basic linked list structure
        int data;
        node* next;

        node(int d){        //constructor that creates a LL and add data
            data = d;
            next = NULL;  //default null to the next pointer 
        }
    };
    node *head, *tail;      //creating two new pointers head and tail
    public:
        linkedlist(){       //constructor to create an empty first node
            head=NULL;
            tail=NULL;
        }
    //insert at beginning function
    void ins_begin(int x){      //insert at beginning function
        node *newnode= new node(x);     //creating a new node
        if(head==NULL){     //if the node is empty i.e when head points NULL
            head=newnode;   //point head on the newnode
            tail=newnode;   //keep tail on the new node since it has only one node
        }
        else{       //when there are already nodes in the linked list
            newnode->next=head;     //point the newnode's next to existing head
            head=newnode;       //point the head to the newnode
        }
    }
     //printing the linked list
    void printlist(){
        node *current=head;     //creating a pointer named 'current'
        while(current!=NULL){       //till current does not reaches the last element
            cout<<current->data<<" ";
            current=current->next;      //traversal
        }
        cout<<endl;
    }
};

int main(){
    linkedlist mylist;
    mylist.ins_begin(10);         //inserting elements in the beginning of the linked list
    mylist.ins_begin(40);
    mylist.ins_begin(100);
    mylist.printlist();

    mylist.ins_begin(70);
    mylist.ins_begin(85);
    mylist.printlist();

    //in this the elements are added at the beginning hence the element added last will be the first

    return 0;
}