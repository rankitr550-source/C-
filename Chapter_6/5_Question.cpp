#include<iostream>
using namespace std;
    int maxOftwoNum(int a, int b) {
        if(a>b) {
            cout<<"greater number is:";
            return a;
        }
        else {
            cout<<"greater number is:";
            return b;
        }
    }
    int main() {
        int a;
        cout<<"enter a:";
        cin>>a;
        int b;
        cout<<"enter b:";
        cin>>b;
        cout<<maxOftwoNum(a,b);
}