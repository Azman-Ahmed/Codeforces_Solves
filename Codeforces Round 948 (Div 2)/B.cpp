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

    string str = std::bitset<32>(n). to_string();

    string stt = "";

    int flag = 0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='0' && flag == 0) continue;
        else
        {
            stt+=str[i];
            flag = 1;
        }
    }

    reverse(stt.begin(), stt.end());
//    cout<<stt<<endl;


    flag = 0;
    for(int i=0; i<stt.size(); i++)
    {
        if(stt[i]=='1' && stt[i+1]=='1' && flag==0)
        {
            flag = 1;
            stt[i] = '2';

        }
        else if(stt[i]=='1' && stt[i+1]=='1' && flag==1)
        {
            stt[i] = '0';
        }
        else if(stt[i]=='1' && stt[i+1]=='0' && flag==1)
        {
            flag = 0;
            stt[i] = '0';
            stt[i+1] = '1';
        }
    }
    if(flag==1)
    {
        stt[stt.size() - 1] = '0';
        stt+='1';
    }

    cout<<stt.size()<<endl;

    for(int i=0; i<stt.size(); i++)
    {
        if(stt[i]=='2') cout<<"-1 ";
        else cout<<stt[i]<<" ";
    }
    cout<<endl;




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

