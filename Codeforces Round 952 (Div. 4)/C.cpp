#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define forn(n) for(int i = 0; i<n; i++)
#define pr(n) cout<<n<<endl;
#define all(x) (x).begin(), (x).end()
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

using namespace std;


lli dp[3][1000005], trace[3][1000005];

const int MOD = 1e9 + 7;


void solve()
{
    lli n;
    cin>>n;
    vector<int> veca(n);
    map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        cin>>veca[i];
        mp[veca[i]]++;
    }

    if(n==1)
    {
        if(veca[0]==0) cout<<1<<endl;
        else cout<<0<<endl;

        return;
    }

    sort(veca.begin(), veca.end());

    lli track = 0, ans = 0;
    for(int i=0; i<n; i++)
    {
        track+=veca[i];
        if(i==0 && mp[track]>1)
        {
            ans++;
        }
        else if(i!=0 && mp[track]>0) ans++;
    }
    cout<<ans<<" eije"<<endl;
}

int main()
{

	int t;
	cin>>t;

	lli cse = 1;
	while(t--)
    {
//        cout<<"Case "<<cse++<<": ";
        solve();

    }

}

