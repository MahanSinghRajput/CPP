#include<iostream>
using namespace std;
void explainPair(){
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second << endl;

    pair<int,pair<int,int>> l = {1,{2,3}};
    cout << l.first << " " << l.second.first << " " << l.second.second << endl;

    pair<int,int> a[] = {{1,2},{3,4},{5,6}};
    cout << a[1].second;
}