#include <bits/stdc++.h>

using namespace std;

void solve()
{


    int n;
    cin>>n;
    vector<int> veca(n);

    for(int i=0; i<n; i++) cin>>veca[i];

    if(veca[0]!=1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
