#include<iostream>
using namespace std;
int main() {
    int a, b,c;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;

    if(a>0 && b>0 && c>0) {
        if(a>b) {
            if(a>c) {
                cout<<"a is greater";
            }
            else {
                cout<<"c is greater";
            }
        }
        else {
            if(b>c){
                cout<<"b is greater";
            }
            else {
                cout<<"c is greater";
            }
        }
    }
    else {
        cout<<"Not positive no";
    }    
}