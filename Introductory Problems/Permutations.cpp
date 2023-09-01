#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long int n,i;
    cin >> n;
    if(n==1)
        cout << n;
    else if(n<=3)
        cout << "NO SOLUTION";
    else
    {
        for(i=2;i<=n;i+=2)
            cout << i << " ";
        for(i=1;i<=n;i+=2)
            cout << i << " ";
    }
    return 0;
}
