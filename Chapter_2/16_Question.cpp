#include<iostream>
using namespace std;
int main() {
    int x,y;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;

    if(x>0 && y>0){
        cout<<"lies in 1st Quadrant";
    }
    else if(x<0 && y>0) {
        cout<<"lies in 2nd Quadrant";
    }
    else if(x<0 && y<0) {
        cout<<"lies in 3nd Quadrant";
    }
    else{
        cout<<"lies in 4nd Quadrant";

    }
}