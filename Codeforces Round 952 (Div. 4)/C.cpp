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
    vector<lli> veca(n);
    map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        cin>>veca[i];
        mp[veca[i]]++;
    }

    lli mx = -1, sum = 0, ans = 0;
    for(int i=0; i<n; i++)
    {
        mx = max(mx, veca[i]);
        sum+=veca[i];
        if(sum==2*mx) ans++;
    }
    cout<<ans<<endl;
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

