#include<iostream>
using  namespace std;
int main() {
    int age;
    cout<<"Enter age:";
    cin>>age;
    if(age>=81 && age<=100){
        cout<<"Very Good";
    }
    else if(age<=80 && age>=61) {
        cout<<"Good";
    }
    else if(age>=41 && age<=61){
        cout<<"Average";
    }
    else {
        cout<<"Fail";
    }
}