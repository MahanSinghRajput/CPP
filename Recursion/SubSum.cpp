#include<iostream>
using namespace std;

void printSubSum(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if(ind == n){
        if(sum == s){
            for(auto it : ds) cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    //pick
    s += arr[ind];
    printSubSum(ind+1,ds,s,sum,arr,n);
    //not pick
    s -= arr[ind];
    ds.pop_back();
    printSubSum(ind+1,ds,s,sum,arr,n);
}

bool printSubSumOnce(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if(s > sum) return false; // only for positive numbers optimization
    if(ind == n){
        if(sum == s){
            for(auto it : ds) cout << it << " ";
            cout << endl;
            //condition satisfied 
            return true;
        }
        //condition not satisfied
        return false;
    }
    ds.push_back(arr[ind]);
    //pick
    s += arr[ind];
    if(printSubSumOnce(ind+1,ds,s,sum,arr,n) == true){
        return true;
    }
    //not pick
    s -= arr[ind];
    ds.pop_back();
    if(printSubSumOnce(ind+1,ds,s,sum,arr,n) == true){
        return true;
    }
    return false;
}

int countSubSum(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if(ind == n){
        if(sum == s){
            return 1;
        }
        return 0;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    int l = countSubSum(ind+1,ds,s,sum,arr,n);
    ds.pop_back();
    s -= arr[ind];
    int r = countSubSum(ind+1,ds,s,sum,arr,n);
    return l + r;
}

int main(){
    int arr[] = {1,2,3};
    int n = 3;
    int sum = 3;
    vector<int> ds;
    cout << countSubSum(0,ds,0,sum,arr,n) << endl;
}