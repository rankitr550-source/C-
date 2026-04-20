#include<iostream>
using namespace std;
//pass by value 
// void swap(int x, int y){
//     int temp=x;
//     x=y;
//     y=temp;
// }
// int main() {
//     int x=9,y=8;
//     cout<<x<<" "<<y<<endl;
//     swap(x,y);
//     cout<<x<<" "<<y<<endl;

//pass by refrence
void swap(int& x, int& y){
    int temp=x;
    x=y;
    y=temp;
}
int main() {
    int x=9,y=8;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}