#include<bits/stdc++.h>
using namespace std;

//Basic structure of a node
struct node{
    int data;
    node* next;     //node type pointer

    node(int d=0){      //parameterized const with default arg
        data=d;         //set data value to given value
        next=NULL;      //automatically sets the next value to NULL
    }
};

int main(){
    //creating a linked list
    node* head=new node(10);       //node type of ptr named 'head' that points the first node(newly created node) and traverse further
    head->next=new node(20);       //creating the second node
    head->next->next=new node(40);      //third node
    //here memories have been allocated dynamically

    //printing the linked list
    while(head != NULL){        //till head reaches the last node
        cout<<head->data<<" ";
        head=head->next;    //traversal
    }
    return 0;
}