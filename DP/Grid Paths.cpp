#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int m=1e9+7;
 
int f(int i,int j,vector<vector<char>>&v,vector<vector<int>>&dp)
{
    if(i<0 || i>=v.size() || j<0 || j>=v.size() || v[i][j]=='*')
        return 0;
    if(i==0 && i==j)
        return 1;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int d=0,r=0;
    if(j>0 && v[i][j-1]!='*')
        d = f(i,j-1,v,dp);
    if(i>0 && v[i-1][j]!='*')
        r = f(i-1,j,v,dp);
    return dp[i][j] = (d+r)%m;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin >> n;
    vector<vector<char>>v(n,vector<char>(n));
    vector<vector<int>>dp(n,vector<int>(n,-1));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> v[i][j];
    cout << f(n-1,n-1,v,dp);
    /*vector<vector<char>>dp(n,vector<char>(n));
    dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //if(i!=0 && j!=0)
            //{
                int d=0,r=0;
                if(j<n-1 && v[i][j+1]!='*')
                d = dp[i][j+1];
                if(i<n-1 && v[i+1][j]!='*')
                    r = dp[i+1][j];
                dp[i][j] = (d+r)%m;
            //}
        }
    }
    cout << dp[n-1][m-1];*/
    return 0;
}