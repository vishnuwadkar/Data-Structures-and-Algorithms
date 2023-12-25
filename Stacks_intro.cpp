#include<iostream>
using namespace std;

struct stack{       //basic structure of stack
    int size;       //defining size of statck
    int top;        //top of stack
    int* arr;       //int ptr for dynamic memory allocation

    stack(int s){       //stack constructor that automatically creates an empty stack
        size=s;
        arr= new int[s];       //dynamically creating an array of reqd size
        top=-1;     //setting top to -1
    }
    //push() function: entering an element into the stack
    void push(int data){    //takes data as arg
        top ++;     //increment top by 1
        arr[top]=data;  //store data at top index i.e 0th
    }
    //pop() function: removing/accessing an element from stack
    int pop(){
        int res=arr[top];   //stores value at top in 'res' variable
        top--;      //decrement the top
        return res;     //returns 'res'
    }
    //peek() function: returns the top element without removing it
    int peek(){
        return arr[top];    
    }
    int sizeo(){    //returns the size of stack
        return (top+1);     //since top starts at 0 for one element
    }
    bool isempty(){     //returns true i.e 1 if stack is empty
        return(top==-1);        //no element in stack
    }
    bool isfull(){      //returns true if the max size is reached
        return(top==size);  //when top reaches the max size of stack
    }
};

int main(){
    stack s(5);
    s.push(10);
    s.push(90);
    s.push(30);
    s.push(4);

    cout<<s.pop()<<endl;    //returns 4 since it was entered last
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.sizeo()<<endl;
    cout<<s.isempty()<<endl;        //stack is not empty
    s.push(90);
    s.push(30);
    s.push(30);
    s.push(4);
    cout<<s.isfull()<<endl;     //stack is full

    return 0;
}

