#include <iostream> //preprocessor directive
using namespace std;
int main() {
    cout<<"Hello, World!"<<endl;

    //type conversion
    char a = 'A';
    int b = a; //implicit type casting
    cout<<b<<endl;

    //type casting
    double c = 100.99;
    int d = (int)c; //explicit type casting
    cout<<d<<endl;

    //input
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Your age is: "<<age<<endl;

    return 0;
}     
/*
  datatypes in C++: int, float, double, char, bool
*/        