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
    string s1, s2;
    cin>>s1>>s2;
    int n = s1.size();
    int m = s2.size();

    int found = n;

    for(int i=0; i<m; i++)
    {
        if(s2[i]==s1[0])
        {
            found = i;
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

