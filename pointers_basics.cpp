//INTRODUCTION TO POINTERS

#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* ptr = &a;  //storing address of a in pointer 'ptr'
    cout<<ptr<<endl;    //prints address of a
    cout<<*ptr<<endl;   //prints value at a; dereferencing
    int** pt = &ptr;     // pointer to a pointer
    cout<<"Address of ptr: "<<pt<<endl
        <<"Value at ptr i.e address of a: "<<*pt<<endl
        <<"Vlue of a by double pointer: "<<**pt<<endl;

    return 0;
}