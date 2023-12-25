#include<iostream>
using namespace std;

class linkedlist{       //class linked;ist
    struct node     //basic node structure
    {
       int data;
       node* next;

       node(int d){     //node constructor
        data=d;
        next=NULL;
       }
    };
    node* head, *tail;      //creating tail and head pointer
    public:
        linkedlist(){       //class constructor that create an empty list
            head=NULL;
            tail=NULL;
        }
    void ins_list(int data){        //adding node to the list
        node* newnode = new node(data);
        if(head==NULL){
            head=newnode;
            tail=head;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }

    }
    //deletion of node function
    void deletion_list(int target){     //takes the element to be deleted as an argument
        node* ptr= head;        //node type pointer 'ptr' 
        if(head==NULL){     //when the node is empty i.e head points NULL
            cout<<"The node is emtpy!";
            return;
        }
        else if(head->data==target){        //checking for the first node and ptr is on the first node
            head=head->next;    //head now points the second node
            delete(ptr);        //freeing the memory space of the unlinked node
        }
        else{
            while(ptr->next!=NULL && ptr->next->data!=target){   //till the list does not ends and the target data is not found
                ptr=ptr->next;                     //keep traversing and when ptr reaches previous node of target it breaks the loop
            }
            if(ptr->next==NULL){        //whole list traversed; data didn't match
                cout<<target<<" data does not exist!"<<endl;
                return;
            }
            else{       //target matched with ptr->next->data
                node* targetnode = ptr->next;       //another pointer named targetnode that points the target element's node 
                ptr->next=ptr->next->next;      //ptr is at previous node and pointing it to the next node of target node
                delete(targetnode);     //deleting space aquired by targetnode i.e deallocating the memory
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
    linkedlist mylist= linkedlist();
    mylist.deletion_list(10);
    mylist.ins_list(10);
    mylist.ins_list(20);
    mylist.ins_list(50);
    mylist.ins_list(80);
    mylist.ins_list(45);
    mylist.ins_list(30);
    mylist.printlist();

    mylist.deletion_list(45);       //deletion function called
    mylist.printlist();
    mylist.deletion_list(60);
    mylist.deletion_list(10);
    mylist.printlist();

    return 0;
}