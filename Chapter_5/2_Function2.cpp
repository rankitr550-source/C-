#include<iostream>
using namespace std;
void usa() {
    cout<<"yor in USA"<<endl;
}
void Ankit() {
    cout<<"Ankit Chaurasia"<<endl;
}
void india() {
    usa();
    Ankit();
    cout<<"You are in india"<<endl;
}
int main() {
    india(); 
}