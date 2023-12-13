//CREATION OF A  LINKED LIST
#include<bits/stdc++.h>
using namespace std;

struct node{        //syntax of node; a user defined datatype
    int data;       //storing data
    node*next;      //storing address of the next node

    node(int d=0){      //initialization constructor 
        data=d;         //setting value of data
        next=NULL;      //automatically puts NULL value to NEXT when a new node is created
    }
};

int main(){
    int a,b,c;
    cout<<"Enter the values: ";
    cin>>a;
    cin>>b;
    cin>>c;
    node*head=new node(a);      //creating a head ptr and storing address of new node with next value as NULL (constructor) in it
    head->next=new node(b);     //the NEXT of new node(first) will now store value of newly created second node with its data as b
    head->next->next=new node(c);   //

    //printing the linked list
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;        //traversal
    }
    return 0;
}