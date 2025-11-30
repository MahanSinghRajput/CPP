#include<iostream>
using namespace std;
void explainVectors(){
    vector<int> v;
    v.push_back(1);  //adds the value to the end of the vector
    v.emplace_back(2); //it does the same but is faster

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v1(5,100); //{100,100,100,100,100}
    vector<int> v2(5); //{0,0,0,0,0}
    vector<int> v3(v1); //{100,100,100,100,100}

    //iterators
    vector<int> :: iterator it = v.begin(); //it stores address
    it++;
    cout << *(it) << endl;
    it += 2;
    cout << *(it) << endl;

    vector<int>::iterator it_end = v.end();
    vector<int>::reverse_iterator it_rend = v.rend();
    vector<int>::reverse_iterator it_rbegin = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

    for(vector<int> :: iterator it = v.begin();it != v.end();it++){
        cout << *(it) << " ";
    }

    for(auto it = v.begin();it != v.end();it++){
        cout << *(it) << " ";
    }

    v.erase(v.begin() + 1); //{10,20,12,23} -> {10,12,23}
    v.erase(v.begin()+2,v.begin()+4); //[start,end) {10,20,12,23,35} -> {10,12,23}

    for(auto it: v){
        cout << it << " ";
    }

    //insert
    vector<int> v4(2,100); //{100,100}
    v4.insert(v4.begin(),300); //{300,100,100}
    v4.insert(v4.begin()+1,2,10); //{300,10,10,100,100}

    vector<int> copy(2,50); //{50,50}
    v4.insert(v4.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

    cout << v4.size(); //7
    v4.pop_back(); // pops out the last element {50,50,300,10,10,100}
    
    v1.swap(v2); // swaps 2 vectors
    v4.clear(); //erases entire vector
    cout << v4.empty() << endl; //bool
}