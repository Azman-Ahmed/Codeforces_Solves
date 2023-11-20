#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='B') cnt++;
    }

    if(cnt==k) cout<<0<<endl;
    else if(cnt>k)
    {
        int req = cnt-k, ans;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B') req--;
            if(req==0)
            {
                ans = i+1;
                break;
            }
        }
        cout<<1<<endl;
        cout<<ans<<" A"<<endl;
    }
    else
    {
        int req = k-cnt, ans;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A') req--;
            if(req==0)
            {
                ans = i+1;
                break;
            }
        }
        cout<<1<<endl;
        cout<<ans<<" B"<<endl;

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
