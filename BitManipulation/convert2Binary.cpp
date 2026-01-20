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
string convertToBinaryRecursive(int n){
    if(n == 0) return "0";
    return convertToBinaryRecursive(n / 2) + to_string(n % 2);
}
string convertToBinaryOptimal(int n){
    if(n == 0) return "0";
    string result = "";
    for(int i = sizeof(n)*8 - 1; i >= 0; i--){
        int k = n >> i;
        if(k & 1) result += "1";
        else if(result != "") result += "0"; // to avoid leading zeros
    }
    return result;
}

string convertToBinaryOptimal2(int n){
    string res = "";
    for(int i = sizeof(n)*8 - 1; i >= 0; i--){
        int k = n >> i;
        if(k & 1) res += "1";
        else if(res != "") res += "0";
    }
    return res;
}

int convertToDecimal(string s){
    int n = s.length();
    int ans = 0, p = 1;
    for(int i = n - 1; i >= 0; i--){
        if(s[i] == '1') ans += p;
        p = p * 2;
    }
    return ans;
}
int main(){
    cout << convertToBinary(18) << endl;
    cout << convertToDecimal("10010") << endl;
    return 0;
} 