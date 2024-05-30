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

    string s;
    cin>>s;

    for(int i=0; i<n-1; i++)
    {
        if(s[i]>='a' && s[i]<='z' && s[i]>s[i+1]) flag = 1;
    }

    for(int i=0; i<n-1; i++)
    {
        if(s[i]>='0' && s[i]<='9' && s[i]>s[i+1]) flag = 1;
    }

    for(int i=0; i<n-1; i++)
    {
        if((s[i]>='a' && s[i]<='z') && (s[i+1]>='0' && s[i+1]<='9')) flag = 1;
    }

    if(flag) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;





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

