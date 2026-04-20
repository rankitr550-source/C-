#include<iostream>
using namespace std;
void sum(int a, int b) { //Formal parameter in function declaration
    cout<<a+b;
}
int main() {
    int a, b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    sum(a,b); //Actual Parameter in function call
    return 0;
}