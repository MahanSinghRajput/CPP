#include<iostream>
using namespace std;
string convertToBinary(int n){
    string res="";
    while(n>0){
        if(n%2==0)
            res+='0';
        else
            res+='1';
        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}
string onesComplement(int n){
    string binary=convertToBinary(n);
    string result="";
    for(int i=0;i<binary.length();i++){
        if(binary[i]=='0')
            result+='1';
        else
            result+='0';
    }
    return result;
}
string twosComplement(int n){
    string onesComp=onesComplement(n);
    string result=onesComp;;
    int carry=1;
    for(int i=onesComp.length()-1;i>=0;i--){
        if(onesComp[i]=='1' && carry==1){
            result[i]='0';
            carry=1;
        }
        else if(onesComp[i]=='0' && carry==1){
            result[i]='1';
            carry=0;
        }
        else{
            result[i]=onesComp[i];
        }
    }
    return result;
}
int main(){
    cout << onesComplement(5) << endl;   
    cout << twosComplement(5) << endl;   
    return 0;
}