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
    lli n,m;
    cin>>n>>m;
    vector<int> veca(m);
    set<int> st;

    string s,c;
    cin>>s;

    for(int i=0; i<m; i++)
    {
        cin>>veca[i];
        st.insert(veca[i]);
    }
    cin>>c;

    sort(c.begin(), c.end());

    int cnt = 0;

    for(auto x:st)
    {
        s[x-1] = c[cnt];
        cnt++;
    }
//    for(auto x:st) cout<<x<<" ";
//    cout<<endl;
//    cout<<c<<endl;
    cout<<s<<endl;

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

