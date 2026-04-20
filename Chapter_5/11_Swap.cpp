#include<iostream>
using namespace std;
int main() {

    // method-1
    // #include<iostream>
    // int x=4;
    // int y=7;
    // cout<<x<<" "<<y<<endl;
    // int temp=x;
    //  x=y;
    //  y=temp;
    // cout<<x<<" "<<y<<endl;

    //method-2
    int x=9,y=4;
    cout<<x<<" "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y<<endl;

    return 0;
}