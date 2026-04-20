#include<iostream>
using namespace std;
int main(){
    float l, b;
    cout<<"enter l:";
    cin>>l;
    cout<<"enter b:";
    cin>>b;

    float A=l*b;
    float P=(l+b)*2;

    if(A>P){
        cout<<"area is greater than parameter";
    }
    else {
        cout<<"Parameter is greater";
    }
}