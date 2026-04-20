#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;
    int i=1;
    do {
        cout<<i*n<<" ";
        i++;
    } while (i<=10);
    return 0;
}