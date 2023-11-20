#include <bits/stdc++.h>
#define lli long long int
using namespace std;


void solve()
{
    lli n, ans = 0;
    cin>>n;
    vector<lli> veca(n);

    for(lli i=0; i<n; i++) cin>>veca[i];

    for(lli i=n-2; i>=0; i--)
    {
        lli tem = veca[i+1] + veca[i] - 1;
        tem = (tem/veca[i+1]);
        ans+= tem - 1;
        veca[i] = veca[i]/(tem);
    }
    cout<<ans<<endl;
}
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
