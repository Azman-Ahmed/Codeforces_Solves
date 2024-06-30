#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define forn(n) for(int i = 0; i<n; i++)
#define pr(n) cout<<n<<endl;
#define all(x) (x).begin(), (x).end()
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

using namespace std;


const int MOD = 1e9 + 7;


void solve()
{
    lli n;
    cin>>n;

    vector<int> veca(n);

    for(int i=0; i<n; i++)
    {
        cin>>veca[i];
    }

    lli aug = 0, ans = 0, rep = 0, diff = 0;

    for(int i=0; i<n; i++)
    {
        if(aug<veca[i])
        {
            rep = 0;
            if(i==0) ans+=veca[i];
            else
            {
                diff = veca[i] - veca[i-1];
                ans += (diff + 1);
            }
        }
        else if(aug==veca[i])
        {
            rep++;
//            cout<<rep<<" "<<diff<<endl;
            if(rep<=diff) continue;
            else ans+=(rep-diff);
        }
        else
        {
            rep = 0;
            diff = veca[i-1] - veca[i];
        }
        aug = veca[i];
//        cout<<ans<<endl;
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



