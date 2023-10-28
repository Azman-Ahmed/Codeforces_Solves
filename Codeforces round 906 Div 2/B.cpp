
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;

    string s,t, tem = "10";
    cin>>s>>t;

    for(int i=0; i<30; i++) tem+="10";

    if(tem.find(s)!=-1) cout<<"Yes"<<endl;
    else
    {
        if(tem.find(t)!=-1)
        {
            char tfir = t[0];
            char tlas = t[m-1];
            for(int i=1; i<n; i++)
            {
                if(s[i-1]!=s[i]) continue;
                else
                {
                    if(s[i-1]!=tfir && s[i]!=tlas) continue;
                    else
                    {
                        cout<<"No"<<endl;
                        return;
                    }
                }
            }
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
