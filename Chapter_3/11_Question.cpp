#include<iostream>
using namespace std;
int main() {
    //Method-1
    // for(int i=1; i<100; i++) {
    //     if(i%2==0) {
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    //Method-2 in less time
    for(int i=1; i<100; i++) {
        if(i%2==0) {
            continue;
        }
        cout<<i<<endl;
    }
}