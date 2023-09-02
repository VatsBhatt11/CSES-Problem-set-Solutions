#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const ll m=1e9+7;

ll power(ll a,ll b,ll m)
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
        ll a,b,c;
        cin >> a >> b >> c;
        cout << power(a,power(b,c,m-1),m) << endl;
    }
    return 0;
}
