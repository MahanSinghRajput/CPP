#include<iostream>
using namespace std;
void explainUnorderedMAp(){
    //creation
    unordered_map<string,int> m;

    //insertion
    //1
    pair<string,int> p = make_pair("abs",3);
    m.insert(p);

    //2
    pair<string,int> q("acv",2);
    m.insert(p);

    //3
    m["xyz"] = 1;

    //search
    cout << m["mera"] << endl;
    cout << m.at("abs") << endl;

    cout << m.at("unknown1") << endl; //gives error
    cout << m["unknown2"] << endl; //gives 0
    cout << m.at("unknown2") << endl; //gives 0

    //size
    cout << m.size() << endl;

    //to check presence
    cout << m.count("bro") << endl; //gives 0

    //erase 
    m.erase("abs");

    //for each
    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    //iterator
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
}

// It is an associative container that stores elements in key-value pairs.
// It is implemented using hash tables.
// It provides average O(1) time complexity for search, insert, and delete operations.
// It does not maintain any order of elements.
// It allows duplicate values but not duplicate keys.
// It is part of the C++ Standard Library and defined in the <unordered_map> header file.
// It is useful when fast access to elements is required based on keys.