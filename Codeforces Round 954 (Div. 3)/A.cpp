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
    int a,b,c;
    cin>>a>>b>>c;

    int tem1 = abs(a-a) + abs(b-a) + abs(c-a);
    int tem2 = abs(a-b) + abs(b-b) + abs(c-b);
    int tem3 = abs(a-c) + abs(b-c) + abs(c-c);

    cout<<min(tem1, min(tem2, tem3))<<endl;
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

