#include<bits/stdc++.h>
using namespace std;
int f(int n, vector<int> dp){
    if(n<=1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = f(n-1,dp) + f(n-2,dp);
}
int main(){
    int n;
    cin >> n;
    //memoization
    vector<int> dp(n+1,-1);
    int ans = f(n,dp);
    cout << ans << endl;

    //tabulation
    vector<int> dp2(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout << dp[n] << endl;

    //optimising space
    int prev2 = 0, prev = 1;
    for(int i=2;i<=n;i++){
        int curri = prev2 + prev;
        prev2 = prev;
        prev = curri;
    }
    cout << prev << endl;
    return 0;
}