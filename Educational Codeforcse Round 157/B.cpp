

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> veca(2*n);

    for(int i=0; i<2*n; i++) cin>>veca[i];
    int ans = 0;
    sort(veca.begin(), veca.end());
    for(int i=1; i<n; i++)
    {
        ans+= abs(veca[i] - veca[i-1]) + abs(veca[2*n-i-1] - veca[2*n-i]);
    }

    cout<<ans<<endl;
    for(int i=0; i<n; i++) cout<<veca[i]<<" "<<veca[2*n-i-1]<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
