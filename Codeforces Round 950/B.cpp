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
    lli n, f, k, maybe = 0, flag = 0;
    cin>>n>>f>>k;
    f--;

    vector< pair<int, int> > veca(n);

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        veca[i].first = x;
        veca[i].second = i;
    }



    int fav = veca[f].first;


//    cout<<fav<<endl;

    sort(veca.begin(), veca.end());
    reverse(veca.begin(), veca.end());

    for(int i=0; i<k; i++)
    {
        if(veca[i].first==fav)
        {
            maybe = 1;
        }
    }

    for(int i=k; i<n; i++)
    {
        if(veca[i].first==fav)
        {
            flag = 1;
        }
    }

    if((maybe==1 || maybe==0) && flag==0) cout<<"YES"<<endl;
    else if(maybe==1 && flag==1) cout<<"MAYBE"<<endl;
    else if(maybe==0 && flag==1) cout<<"NO"<<endl;










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

