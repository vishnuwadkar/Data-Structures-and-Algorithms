#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;   //will store the data
    node*next;  //node type pointer named next

    node(int d=0){  //constructor with default argument
        data = d;
        next = NULL;
    }
};

int main(){
    //methods of assigning values

    //method 1
    node h=node(10);  //direct method by using constructor to store data
    cout<<h.data<<endl;

    //method 2
    node* p=new node(20);   //create a ptr 'p' and store adrress of new node in it with 20 as its data since default const
    cout<<p->data<<endl;    //access the objects by using pointer with arrow operator
    cout<<(*p).data<<endl;  //this is equivalent a.k.a dereferencing
    cout<<p->next<<endl;    //this will be a NULL
    return 0;
}