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

    vector<int> veca(n);

    for(int i=0; i<n; i++) cin>>veca[i];

    for(int i=0; i<n; i++)
    {
        if(veca[i]!=veca[0]) flag = 1;
    }

    if(flag==1)
    {
        cout<<"Yes"<<endl;
        if(veca[n-2]-veca[0]==0)
        {
            cout<<'B';
            for(int i=0; i<n-1; i++) cout<<"R";
            cout<<endl;
        }
        else
        {
            for(int i=0; i<n-1; i++) cout<<"R";
            cout<<'B';
            cout<<endl;
        }

    }
    else cout<<"No"<<endl;







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
