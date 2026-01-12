//subsequence - a contiguous / non-contiguous subsequence which follows the order
//TC = O(n * 2^n)  SC = O(n)
#include<iostream>
using namespace std;
void sub(int arr[], vector<int> ds, int ind, int n){
    if(ind == n){
        for(auto it : ds){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    ds.push_back(arr[ind]);
    sub(arr,ds,ind+1,n);
    ds.pop_back();
    sub(arr,ds,ind+1,n);
}
int main(){
    int arr[] = {1,2,3};
    int n = 3;
    vector<int> ds;
    sub(arr,ds,0,n);
}