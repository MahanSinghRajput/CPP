#include<iostream>
using namespace std;
int main(){
    int n = 9, i = 2;
    int setBit = n | (1 << i);
    cout << "Number after setting " << i << "th bit: " << setBit << endl;
    return 0;
}