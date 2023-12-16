
#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

void solve()
{
    lli n,m;
    cin>>n>>m;

    cout<<max(m,n)<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
