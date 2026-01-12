#include<iostream>
using namespace std;
void fun(int arr[], int l, int r){
    if(l >= r) return;
    swap(arr[l],arr[r]);
    fun(arr,l+1,r-1);
}
void fun2(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n - i - 1]);
    fun2(i + 1, arr, n);
}
int main(){
    int arr[] = {2,3,4,5,6,7};
    fun(arr,0,5);
    for(int i=0;i<6;i++) cout << arr[i] << " ";
    cout << endl;
    int arr2[] = {1,2,3,4,5,6,7};
    fun2(0,arr2,7);
    for(int i=0;i<7;i++) cout << arr2[i] << " ";
}