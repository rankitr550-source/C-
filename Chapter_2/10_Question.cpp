#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;

    if(n>0){
        if((n%3==0 || n%5==0) && (n%15!=0)) {
            cout<<"Divisible by 3 or 5 but not by 15";
        }
        else {
            cout<<"Divisible by 15";
        }
    }
    else {
        cout<<"Negative no";
    }
}