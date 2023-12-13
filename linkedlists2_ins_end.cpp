//Insertion in a linked list: Insertion at end

#include<bits/stdc++.h>
using namespace std;


class Linkedlist{       //creating a class named liked list to access the functions
    struct node{        //basic structute of a node
        int data;
        node* next;

        node(int d=0){
            data=d;
            next=NULL;
        }
    };
        public:
            node *head, *tail;      //creating node type pointers 'head' and 'tail'
            Linkedlist(){       //constructor to create an empty node
                head=NULL;
                tail=NULL;
            }

            void insert_end(int x){     //function to add elements at end
                node* newnode= new node(x);     //create a new node that will be added
                if(head==NULL){     //when the list is empty the new node will be the first node
                    head=newnode;   //point head at newnode
                    tail=head;      
                }
                else{       //when the list is filled
                    tail->next=newnode;     //pointing the NEXT of last element 'TAIL' to the newly created node 
                    tail=tail->next;        //tail now becomes the next of newnode
                }
            }

        //printing the linked list
    void printlist(){
        node *current=head;     //creating a pointer named 'current'
        while(current!=NULL){       //till current does not reaches the last element
            cout<<current->data<<" ";
            current=current->next;      //traversal
        }
    }
    
};

int main(){
    //making a linked list
    Linkedlist mylist= Linkedlist();
    mylist.insert_end(40);
    mylist.insert_end(70);
    mylist.insert_end(10);
    mylist.insert_end(100);

    mylist.printlist();
    
    return 0;

}
