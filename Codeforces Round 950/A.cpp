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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;

    map<char, int> mp;

    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }

    int ans = 0;

    for(int i=0; i<7; i++)
    {
        char ch = 'A' + i;
        if(mp[ch]<m) ans+=(m-mp[ch]);
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
