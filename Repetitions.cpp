#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long int n,i,cnt=0,m=1;
    string s;
    cin >> s;
    n=s.length();
    if(n==1)
        m=1;
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
            if(i==n-2)
                cnt++;
        }
        else
        {
            if(s[i]==s[i-1])
            {
                cnt++;
            }
            m=max(m,cnt);
            cnt=0;
        }
    }
    m=max(m,cnt);
    cout << m << endl;
    return 0;
}
