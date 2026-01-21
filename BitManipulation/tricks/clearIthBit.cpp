#include<iostream>
using namespace std;
int main(){
    int n =  13, i = 2;
    int clearBit = n & (~(1 << i));
    cout << "Number after clearing " << i << "th bit: " << clearBit << endl;
    return 0;
}