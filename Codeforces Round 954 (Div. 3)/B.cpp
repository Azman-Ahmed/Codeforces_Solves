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

    int arr[n+5][m+5];

    for(int i=0; i<n+5; i++)
    {
        for(int j=0; j<m+5; j++) arr[i][j] = 0;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i+1][j] && arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i][j-1]) arr[i][j] = max(arr[i-1][j], max(arr[i+1][j], max(arr[i][j-1], arr[i][j+1])));
        }
    }

//    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
//    cout<<endl;


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

