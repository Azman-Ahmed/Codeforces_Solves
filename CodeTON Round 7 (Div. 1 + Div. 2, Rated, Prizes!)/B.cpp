
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt = 0, ans = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='B') cnt++;
        else if(s[i]=='A' && cnt!=0)
        {
            ans+=cnt;
            cnt = 1;
        }
    }
    cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
