#include<iostream>
using namespace std;
int main() {
    int age, ram,shyam,ajay;
    cout<<"Enter ram age:";
    cin>>ram;
    cout<<"Enter shyam age:";
    cin>>shyam;
    cout<<"Enter ajay age:";
    cin>>ajay;

    // if(ram>shyam){
    //     if(ram>ajay){
    //         cout<<"ram is elder";
    //     }
    //     else {
    //         cout<<"ajay is elder";
    //     }
    // }
    // if(ram<shyam){
    //         if(shyam>ajay){
    //             cout<<"shyam is elder";
    //         }
    //         else {
    //             cout<<"ajay is elder";
    //         }
    //     }

    if(ram>shyam && ram>ajay) {
        cout<<"ram is elder";
    }
    else if(shyam>ram && shyam>ajay){
        cout<<"shyam is elder";
    }
    else {
        cout<<"ajay is elder";
    }
}