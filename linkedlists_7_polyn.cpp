#include<iostream>
using namespace std;

struct node{
    float coeff;
    int exp;
    node* next;
};

//creation of new node
void create(int x, int y, node**temp){
    node *r, *z;
    z= *temp;
    if(z==NULL){
        r= new node;
        r->coeff=x;
        r->exp=y;
        *temp= r;
        r->next= new node;
        r= r->next;
        r-> next= NULL;
    }
    else{
        r->coeff = x;
        r->exp=y;
        r->next= new node;
        r= r->next;
        r-> next= NULL;
    }
}

//addition of two nodes
void add(node*poly1, node*poly2, node *poly){
    while(poly1==NULL && poly2==NULL){
        
    }
}