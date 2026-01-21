#include<iostream>
using namespace std;
int main(){
    int n = 9, i = 2;
    int toggleBit = n ^ (1 << i);
    cout << "Number after toggling " << i << "th bit: " << toggleBit << endl;
    return 0;
}