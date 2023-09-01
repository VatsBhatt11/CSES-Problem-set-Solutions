#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int m=1e9+7;
 
ll power(ll a,ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        cout << power(a,b)%m << endl;
    }
    return 0;
}