#include<iostream>
using namespace std;
void exp(int n) {
    if(n==0) {
        return;
    }
    cout<<n<<endl;
    exp(n-1);
}
int main() {
    exp(5);
}