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

    while(1)
    {
        if(x%y==0)
        {
            while(1)
            {
                if(x%y==0)
                {
                    k--;
                    x = x/y;
                }
                else break;
            }
        }
        else
        {
            lli a = x/y + 1;
            lli tem = a*y - x;
            if(tem>k)
            {
                cout<<x+k<<endl;
                break;
            }
            else if(tem==k)
            {
                cout<<1<<endl;
                break;
            }
            else
            {
                k = k - tem;
                x = a;
            }
        }
        if(k==0)
        {
            cout<<x<<endl;
            break;
        }
    }




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

