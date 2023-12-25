//INSERTION IN A LINKED LIST: Insertion after a specific position

#include<iostream>
using namespace std;

class linkedlist{       //class linkedlist
    struct node{        //struct node for a node structure
        int data;
        node* next;

        node(int d){        //structure constructor that sets the data equal to the value passed in parameter
            data=d; 
            next=NULL;      //pointing next to NULL
        }
    };

    node *head, *tail;      //making two pointers head and tail
    public:
        linkedlist(){       //class constructor that initiates head and tail: HEAD-->NULL
            head=NULL;
            tail=NULL;
        }
    void ins_newlist(int data){     //insert newlist function
        node*newnode= new node(data);       //dynamically allocating memory space to the newnode
        if(head==NULL){     //when the list is empty
            head=newnode;       //head points the new node
            tail=head;      //tail pointer on the current head???
        }
        else{       //when the list is filled           
            tail->next=newnode;     //tail's next points the newnode
            tail=tail->next;        //tail goes on the next node
        }
    }
    void ins_newlist(int data, int k){      //overloaded func that takes data and posn as arg
        node* newnode= new node(data);      //creating memory for newnode
        if(k==0){       //when thw desired location is after the head
            newnode->next=head;     //newnode next points  the current first node
            head=newnode;       //head now points the new node
            return;
        }
        else{
            node*ptr=head;      //create a new node type pointer 'ptr'
            while(ptr!=NULL && --k){        //till the list does not end AND k'th posn is not reached
                ptr=ptr->next;      //k will become zero on kth node and the ptr reaches the kth node
            }
            if(k==0){       //now k has become zero
                newnode->next=ptr->next;        //storing ptr's next in new node's next i.e creating the afterlink
                ptr->next=newnode;      //ptr is on kth node; hence kth node's next will be pointed to the newnode
            }
            else{       //k didn't become zero and the ptr traversed the whole link
                cout<<"Position exceeds the size of Linked list\n";
            }
        }
    }
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
    linkedlist mylist=linkedlist();     //creating object 'mylist' and constructor runs
    mylist.ins_newlist(5);      //insert new list with one arg i.e insertion at end
    mylist.ins_newlist(19);
    mylist.ins_newlist(7);
    mylist.ins_newlist(10);
    mylist.printlist();

    mylist.ins_newlist(20,2);       //insertion with two arguments: data and place
    mylist.printlist();
    mylist.ins_newlist(100,0);
    mylist.printlist();

    return 0;

}