#include<iostream>
#include<list>
using namespace std;
void explainList(){
    list<int> l;
    l.push_back(2); //{2}
    l.emplace_back(4);//{2,4}
    l.push_front(5);//{5,2,4}
    l.emplace_front(6);//{6,5,2,4}
    //rest functions same as vector
}