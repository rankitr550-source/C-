#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;

    // method-1
    // for(int i=1; i<=10; i++) {
    //     cout<<i<<"*"<<n<<"="<<i*n<<"\n";
    // }

    // method-2
    for(int i=1; i<=10; i++){
        cout<<i*n<<"\n";
    }
}