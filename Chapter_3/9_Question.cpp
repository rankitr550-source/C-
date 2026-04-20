#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;
    int f=1;

    //Method-1
    // for(int i=1; i<n; i++) {
    //     if(n%i==0) {
    //         f=i;
    //     }
    // }
    // cout<<"Highest factor is:";
    // cout<<f;

    //Method-2
    // for(int i=1; i<=n/2; i++) {
    //     if(n%i==0) {
    //         f=i;
    //     }
    // }
    // cout<<"Highest factor is:";
    // cout<<f;

    //Method-3
    for(int i=n/2; i>=1; i-=1) {
        if(n%i==0) {
            cout<<i<<endl;
            break;
        }
    }
}