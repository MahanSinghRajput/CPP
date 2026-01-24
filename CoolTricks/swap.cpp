#include<iostream>
using namespace std;
int main(){
    int a = 5,b = 10;
    //single line swap 
    a = (a+b) - (b=a);
    cout << a << " " << b << endl;
    return 0;
}