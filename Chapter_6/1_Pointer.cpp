#include<iostream>
using namespace std;
int main() {
    int x=3;
    int* p=&x; //P(pointer) is store the Address of variable of x
    int y=6;
    int* q=&y; //q(pointer) is store the Address of variable of y
    cout<<&x<<endl; //Address of variable of x
    cout<<&y<<endl; //Address of variable of y
    cout<<p<<endl; //P is store the Address of variable of x
    cout<<q<<endl; //P is store the Address of variable of y
    cout<<*p<<endl; //Find the variable from given Pointer p or this also called star opretor *p
    cout<<*q<<endl; //Find the variable from given Pointer q or his also called star opretor *q
    cout<<&p<<endl; //find the address of pointer(p)
    cout<<&q<<endl; ///find the address of pointer(q)
}