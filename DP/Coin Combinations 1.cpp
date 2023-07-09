#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int f(int ind,int target,vector<int>&v,vector<vector<int>>&dp)
{
    if(ind==0)
    {
        if(target%v[ind]==0)
            return target/v[ind];
        else
            return 1e9;
    }
    if(dp[ind][target]!=-1)
        return dp[ind][target];
    int notTake = f(ind-1,target,v,dp);
    int take = INT_MAX;
    if(target>=v[ind])
        take=1+f(ind,target-v[ind],v,dp);
    return dp[ind][target]=min(notTake,take);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    /*vector<vector<int>>dp(n,vector<int>(x+1,-1));
    int ans=f(n-1,x,v,dp);
    if(ans==1e9)
        cout << -1 << endl;
    else
        cout << ans << endl;*/
    vector<vector<int>>dp(n,vector<int>(x+1));
    for(int t=0;t<=x;t++)
    {
        if(t%v[0]==0)
            dp[0][t]=t/v[0];
        else
            dp[0][t]=1e9;
    }
    for(int ind=1;ind<n;ind++)
    {
        for(int t=0;t<=x;t++){
        int notTake = dp[ind-1][t];
        int take = INT_MAX;
        if(t>=v[ind])
            take=1+dp[ind][t-v[ind]];
        dp[ind][t]=min(notTake,take);
        }
    }
    int ans=dp[n-1][x];
    if(ans==1e9)
        cout << -1;
    else
        cout << ans;
    return 0;
}