#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> veca(n);

    for(int i=0; i<n; i++) cin>>veca[i];

    int x = veca[0], y = -1, xcon = 0, ycon = 0;

    for(int i=0; i<n; i++)
    {
        if(veca[i]==x) xcon++;
        else if(veca[i]!=x && y==-1)
        {
            y = veca[i];
            ycon++;
        }
        else if(veca[i]==y) ycon++;
    }
    cout<<xcon<<ycon<<n/2<<endl;
    if(xcon==n || ycon==n)  cout<<"Yes"<<endl;
    else if(((xcon==n-1) || ycon==n-1) && (n<=3)) cout<<"Yes"<<endl;
    else
    {
        if(n%2==0 && xcon==n/2 && ycon==n/2) cout<<"Yes"<<endl;
        else if(n%2==1 && ((xcon==n/2 && ycon==n/2+1) || (ycon==n/2 && xcon==n/2+1))) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
