#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int m=1e9+7;
 
int f(int target,vector<int>&dp)
{
    if(target<0)return 0;
    if(target==0)return 1;
    if(dp[target]!=-1)return dp[target];
    dp[target]=0;
    for(int i=1;i<=6;i++)
        dp[target]=((dp[target]%m)+(f(target-i,dp)%m))%m;
    return dp[target]%m;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>dp(n+1,-1);
    cout << f(n,dp);
    return 0;
}