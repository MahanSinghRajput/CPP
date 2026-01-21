#include<iostream>
using namespace std;
int main(){
    int n = 18;
    int count = 0;
    // brute force
    // while(n > 0){
    //     if(n&1) count++;
    //     n /= 2; // n >> 1;
    // }
    
    // Using Brian Kernighan’s Algorithm
    //it keeps turning off the rightmost set bit one by one
    // while(n > 0){
    //     n = n & (n - 1);
    //     count++;
    // }

    //inbuilt function
    //count = __builtin_popcount(n);
    cout << "Number of set bits: " << count << endl;
    return 0;
}