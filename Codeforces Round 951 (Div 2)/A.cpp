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
    lli n, flag = 0;
    cin>>n;

    vector<int> veca(n), ans;

    for(int i=0; i<n; i++)  cin>>veca[i];

    for(int i=0; i<n-1; i++)
    {
        ans.push_back(max(veca[i], veca[i+1]));
    }

    cout<<*min_element(ans.begin(), ans.end()) - 1<<endl;
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
