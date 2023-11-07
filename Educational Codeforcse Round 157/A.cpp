
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b)
    {
        if(a+c>=b) cout<<b<<endl;
        else cout<<a+c+(2*(b-c-a))<<endl;
    }
    else cout<<a<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}

