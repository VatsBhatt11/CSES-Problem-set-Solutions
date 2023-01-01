#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long int n,i,cnt=0;
    cin >> n;
    long int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            cnt+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout << cnt;
    return 0;
}
