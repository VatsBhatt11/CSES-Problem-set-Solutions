#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,cnt=0;
    cin >> n >> x;
    vector<int> a(n);
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    deque<int>d;
    for(i=0;i<n;i++)
        d.push_back(a[i]);
    while(!d.empty())
    {
        if(d.size()==1)
            d.pop_back();
        else if((d.front()+d.back())<=x)
        {
            d.pop_back();
            d.pop_front();
        }
        else
            d.pop_back();
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
