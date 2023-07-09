#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int m=1e9+7;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    vector<ll>dp(x+1);
    dp[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int target=1;target<=x;target++)
            if(target>=v[i])
                dp[target]=(dp[target]+dp[target-v[i]])%m;
    }
    cout << dp[x];
    return 0;
}