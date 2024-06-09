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
    string str;
    cin>>str;

    lli flag = 0;

    lli n = str.size();
    lli l = 0, r = 0, given = 0;

    for(int i=0; i<n-1; i++)
    {
        if(str[i]=='0') flag = 1;
    }
    if(str[n-1]=='9') flag = 1;
    if(str[0]>'1') flag = 1;

    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;




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
