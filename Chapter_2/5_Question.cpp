#include<iostream>
using namespace std;
int main(){
    float cp, sp;
    cout<<"Enter cp:";
    cin>>cp;
    cout<<"Enter sp:";
    cin>>sp;

    if(cp<sp) {
        cout<<"Profit of "<<sp-cp<<endl;
    }
    else if(cp>sp) {
        cout<<"Loss of "<<cp-sp;
    }
    else {
        cout<<"zero profit and zero loss";
    }
}