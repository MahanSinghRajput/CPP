#include<iostream>
using namespace std;
int main(){
    int n = 13, i = 2;
    //using left shift operator
    if((n & (1 << i)) != 0){
        cout << "Bit is set at position " << i << endl;
    } else {
        cout << "Bit is not set at position " << i << endl;
    }

    //using right shift operator
    if((n >> i) & 1){
        cout << "Bit is set at position " << i << endl;
    } else {
        cout << "Bit is not set at position " << i << endl;
    }
}