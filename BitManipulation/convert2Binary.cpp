#include<iostream>
using namespace std;
string convertToBinary(int n){
    string result = "";
    if(n == 0) return "0";
    while(n != 1){
        if(n%2 == 0) result += "0";
        else result += "1";
        n = n / 2;
    }
    result += "1";
    reverse(result.begin(), result.end());
    return result;
}
int main(){
    cout << convertToBinary(18);
    return 0;
}