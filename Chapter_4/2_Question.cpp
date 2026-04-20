#include<iostream>
using namespace std;
int main(){

    // Method-1
    // int n;
    // cout<<"enter n:";
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     cout<<"****"<<endl;
    // }

    // Method-2
    int n;
    cout<<"enter n:";
    cin>>n;
    // int m;
    // cout<<"enter m:";
    // cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}