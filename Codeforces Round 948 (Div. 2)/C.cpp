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
    lli n, lcm = 1;
    cin>>n;
    lli ans = n;
    vector<int> veca(n);

    for(int i=0; i<n; i++)
    {
        cin>>veca[i];
        lli a = veca[i];
        lli b = lcm;
        lcm = (a*b)/(__gcd(a,b));
    }

    sort(veca.begin(), veca.end());

    for(int i=n-1; i>=0; i--)
    {
        if(veca[i]!=lcm) break;
        lli tem = 1;
        for(int j = 0; j<i; j++)
        {
            lli a = veca[j];
            lli b = tem;
            tem = (a*b)/(__gcd(a,b));
        }
        lcm = tem;
        ans--;
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

