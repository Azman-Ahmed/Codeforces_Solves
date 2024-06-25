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
    lli x, y, k;
    cin>>x>>y>>k;

    while(x>=y && k>0)
    {
        lli t = min(k, y - x%y);
        k-=t;
        x+=t;
        while(x%y==0)
        {
            x/=y;
        }
    }

    if(x<y)
    {
        x = (x - 1 + k) % (y - 1) + 1;
    }

    cout<<x<<endl;
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

