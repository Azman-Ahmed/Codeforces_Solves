
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> veca(n-1), ans(n);

    for(int i=0; i<n-1; i++) cin>>veca[i];

    ans[0] = 0;
    for(int i=1; i<n; i++) ans[i] = ans[i-1]^veca[i-1];



    for(int i=0; i<30; i++)
    {
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            if((ans[j]>>i) & 1) cnt--;
            else cnt++;
        }
        if(cnt<0)
        {
            for(int j=0; j<n; j++) ans[j]^=(1<<i); ///reversing the ith bit of every integer in veca,
                                                   ///since in a permutation total count of 0
                                                   ///in ith position<=total count of 1 in ith position
        }
    }

    for(int i=0; i<n; i++) cout<<ans[i]<<endl;
}

int main()
{
    solve();
}

