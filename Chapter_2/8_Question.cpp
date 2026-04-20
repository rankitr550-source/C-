#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;

    // if(n>0){
    //     if(n%5==0 || n%3==0) {
    //         cout<<"Yes divisible by 3 or 5";
    //     }
    //     else{
    //     cout<<"Not divisible by 3 or 5";
    //     }
    // }

    if(n>0 && (n%3==0 || n%5==0)){
        cout<<"Divisible by 3 or 5";
    }
    else {
        cout<<"Not divisible by 3 or 5";
    }
    return 0;
}