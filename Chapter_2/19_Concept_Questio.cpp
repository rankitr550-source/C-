#include<iostream>
using namespace std;
int main() {
    int a,b;
    char op;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter op:";
    cin>>op;
    cout<<"Enter b:";
    cin>>b;
    
    // if(op=='+')cout<<a+b;
    // if(op=='-') cout<<a-b;
    // if(op=='*') cout<<a*b;
    // if(op=='/') cout<<a/b;

    switch(op) {
        case '+':
            break;
            cout<<a+b<<endl;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"ivaild data";
    }
}