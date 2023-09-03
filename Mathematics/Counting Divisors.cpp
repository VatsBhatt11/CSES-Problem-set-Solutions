#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int n=1e6+1;
//vector<vector<int>>divisors(n);
vector<int>divisors(n);
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<n;j+=i)
        {
            divisors[j]++;
            //divisors[j].push_back(i);
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        cout << divisors[a] << endl;
    }
    return 0;
}