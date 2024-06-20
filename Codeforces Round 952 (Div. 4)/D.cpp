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
    cin>>n>>m;

    char grid[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>grid[i][j];
        }
    }

    int uni = 0, flag = 0, top = -5, bottom = -5, left = -5, right = -5;

    for(int i=0; i<n; i++)
    {
        flag = 0;
        for(int j=0; j<m; j++)
        {
            if(grid[i][j]=='#') flag = 1;
        }
        if(flag==1 && uni==0)
        {
            top = i+1;
            uni = 1;
        }
        if(flag==0 && uni==1)
        {
            bottom = i;
            break;
        }
    }
    if(flag==1 && uni==1) bottom = n;

    int y = (top + bottom + 1) / 2;
    top++;
    bottom++;

    flag = 0;


    for(int i = 0; i<m; i++)
    {
        if(grid[y-1][i]=='#' && flag==0)
        {
            left = i+1;
            flag = 1;
        }
        if(flag==1 && grid[y-1][i]=='.')
        {
            right = i;
            flag = 0;
            break;
        }
    }
    if(flag==1) right = m;
    int x = (left + right + 1) / 2;

    cout<<y<<" "<<x<<endl;


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

