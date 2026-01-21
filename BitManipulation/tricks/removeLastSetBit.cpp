#include<iostream>
using namespace std;
int main(){
    int n = 16;
    int result = n & (n - 1);
    cout << "Number after removing last set bit: " << result << endl;
    return 0;
}