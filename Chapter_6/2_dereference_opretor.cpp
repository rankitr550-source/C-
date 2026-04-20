#include<iostream>
using namespace std;
int main() {
    int x=9;
    int* p=&x;
    cout<<p<<endl;
    cout<<x<<endl;
        //or 
    cout<<*p<<endl;
    *p=8; //dereference is change the variable value from previous pointer
    cout<<*p<<endl;    
    cout<<x<<endl;    
}