#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;

    // method-1
    // for(int i=-1; i<=2*n-3; i+=2) {
    //     cout<<i<<"\n";
    // }

    // method-2
    int a=4;
    for(int i=1; i<=n; i++) {
        cout<<a<<endl;
        a+=2;
    }
}