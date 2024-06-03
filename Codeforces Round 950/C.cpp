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
    lli n, m;
    cin>>n;
    vector<lli> a(n), b(n);



    map<lli, lli> mp, mp2;

    for(lli i=0; i<n; i++) cin>>a[i];
    for(lli i=0; i<n; i++)
    {
        cin>>b[i];
        mp[b[i]]++;
    }

    for(lli i=0; i<n; i++)
    {
        if(a[i]!=b[i]) mp2[b[i]]++;
    }

    lli flag = 0;

    cin>>m;
    vector<lli> c(m);

    for(lli i=0; i<m; i++)
    {
        cin>>c[i];
        if(mp2[c[i]]>0)
        {
            mp2[c[i]]--;
            if(i==m-1) flag = 1;
        }
        else
        {
            if(mp[c[i]]>0)
            {
                if(i==m-1)
                {
                    flag=1;
                }
            }
        }
    }
    lli mps = 0;
    for(auto &[x,y]: mp2)
    {
        if(y>0)
        {
            mps=1;
        }
    }

    if(flag==1 && mps==0)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;











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

