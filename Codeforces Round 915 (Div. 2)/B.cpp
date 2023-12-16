

#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

void solve()
{
    int n;
    cin>>n;
    vector<int> adj[n+1];
    for(int i=0; i<n-1; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    double ans = 0;

    for(int i=1; i<=n; i++)
    {
        if(adj[i].size()==1) ans++;
    }
   cout<<ceil(ans/2)<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
