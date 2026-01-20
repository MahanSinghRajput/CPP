#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 10;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}