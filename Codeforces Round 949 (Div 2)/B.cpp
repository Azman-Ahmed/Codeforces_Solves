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
    lli n, m, con = 1, tem = 0, ans = 0;
    cin>>n>>m;

    while(n>0)
    {
        if(n%2==1)
        {
            ans += con;
            tem += con;
        }
        else
        {
            lli a = min(con - tem, tem + 1);
            if(a<=m) ans += con;
        }
        con*=2;
        n/=2;
    }

    while(con-tem<=m)
    {
        ans+=con;
        con*=2;
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

