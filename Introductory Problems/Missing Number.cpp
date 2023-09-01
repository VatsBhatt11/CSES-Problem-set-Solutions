#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long int x,sum=0,n,i;
    cin >> n;
    for(i=0;i<n-1;i++)
    {
        cin >> x;
        sum+=x;
    }
    cout << (n*(n+1)/2)-sum << endl;
    return 0;
}
