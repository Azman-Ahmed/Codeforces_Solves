
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
    lli n, sum = 0;
    cin>>n;

    vector<lli> veca(n);
    for(lli i=0; i<n; i++)
    {
        cin>>veca[i];
        sum+=veca[i];
    }
    sum = abs(sum);
    lli tem2 = 0, tem1 = 0;
    for (lli i = 0; i < n; i++)
    {
        tem2 = max(abs(tem2 + veca[i]), abs(tem1 + veca[i]));
        tem1 += veca[i];
    }

    cout<<max(tem2, sum)<<endl;





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
