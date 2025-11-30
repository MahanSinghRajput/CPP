#include<iostream>
#include<vector>
using namespace std;
//vector is dynamic (no fixed size)
int main(){
    /*
        //syntax
        vector <datatype> name;                 // 0 size
        vector <datatype> name = {1,2,3};       // 3 size
        vector <datatype> name(3,0);            // 3 size {0,0,0}
            -> (3,0) means 3 size, 0 default value
    */

    vector<int> vec = {1,2,3,4,5};
    cout << "size is: " << vec.size() << endl;
    vec.push_back(23); // adds 23 to the last 
    cout << "size after push_back is: " << vec.size() << endl;
    vec.pop_back(); // removes the last element
 
    // for(int val : vec){ // for each loop same as java is used
    //     cout<<val<< " ";
    // }
    cout << vec.front()<< endl;
    cout << vec.back()<< endl;
    cout << vec.at(2) << endl;

    //vec.capacity()
}