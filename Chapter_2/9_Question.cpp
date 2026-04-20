#include<iostream>
using namespace std;
int main() {
    int a, b,c;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;

    if(a>0 && b>0 && c>0){
        if((a+b)>c && (b+c)>a && (c+a)>b){
            cout<<"Yes it is side of Triangle";
        }
        else {
            cout<<"Not it is not side of triangle";
        }
    }
    else {
        cout<<"Side never nigetive";
    }
    return 0;
}