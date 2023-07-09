#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int m=1e9+7;
 
int f(int n,vector<int>&dp)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    if(dp[n]!=1e9)
        return dp[n];
    string s = to_string(n);
    for(auto it:s)
        dp[n] = min(dp[n],1+f(n-(it-'0'),dp));
    return dp[n];
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin >> n;
    //vector<int>dp(n+1,1e9);
    //cout << f(n,dp)-1;
    vector<int>dp(n+1,1e9);
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        string s = to_string(i);
        for(auto it:s)
            if(i>=(it-'0'))
                dp[i] = min(dp[i],1+dp[i-(it-'0')]);
    }
    cout << dp[n];
    return 0;
}