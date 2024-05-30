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
    lli n, tem = 1e9, ans = 0, flag = 0;
    cin>>n;

    vector<lli> veca(n+1),req(n+1);

    for(int i=0; i<n; i++) cin>>veca[i];
    for(int i=0; i<=n; i++) cin>>req[i];

    for(int i = 0; i<n; i++)
    {
        tem = min(tem, abs(req[n]-veca[i]));

    }



    for(int i=0; i<n; i++)
    {
        ans+=abs(veca[i]-req[i]);
        if((veca[i]<=req[n] && req[n]<=req[i]) || (veca[i]>=req[n] && req[n]>=req[i])) flag = 1;
        veca[i] = req[i];
    }
//    cout<<ans<<" "<<flag<<endl;


    if(flag==1) ans++;
    else
    {
        for(int i = 0; i<n; i++)
        {
            tem = min(tem, abs(req[n]-veca[i]));
//            cout<<100<<" "<<req[n]<<" "<<veca[i]<<" "<<tem<<endl;
        }
        ans = ans + tem + 1;


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


