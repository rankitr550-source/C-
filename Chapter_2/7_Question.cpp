#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;
    if(n>99 && n<1000) {
        cout<<"yes It is 3-digit positive number";
    }
    else {
        cout<<"No it is not 3-digit positive number";
    }
    return 0;
}