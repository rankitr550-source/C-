#include<iostream>
using namespace std;
void
int main(){
    exp(0);
}

void exp() {
    static int val=0;
    if(val==5) {
        return;
    }
    cout<<"hey"<<endl;
    val++;
    exp();
}
int main() {
    exp();
}