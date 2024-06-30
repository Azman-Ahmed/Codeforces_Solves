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

    vector<int> ans;
    lli aug = 0;

    for(int i=0; i<n; i++)
    {
        if(veca[i]>aug)
        {
            aug = veca[i];
        }
        ans.push_back(aug-veca[i]);
    }

    sort(ans.begin(), ans.end());

    aug = 0;
    lli fin = 0;

    for(int i=0; i<ans.size(); i++)
    {
        ans[i] -= aug;
        if(ans[i]>0)
        {
            fin+=(ans[i]*(n-i+1));
            aug+=ans[i];
        }
    }

//    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    cout<<fin<<endl;

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


