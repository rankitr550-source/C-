#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;
    
    // Method-1
    for(int i=2; i<=n; i+=2) {
        cout<<i<<"\n";
    }
    
    // Method-2
    // for(int i=1; i<=n; i++) {
    //     if(i%2==0) cout<<i<<"\n";
    // }
}