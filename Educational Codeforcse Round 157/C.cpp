#include<bits/stdc++.h>
using namespace std;

#define lli long long int

void solve()
{
    lli n, ans = 0;
    cin>>n;
    vector<string> veca(n);

    for(lli i=0; i<n; i++) cin>>veca[i];
//    for(lli i=0; i<n; i++) cout<<veca[i]<<endl;


    vector<string> v1, v2, v3, v4, v5; // numbers of length 1,2,3,4,5, since the length of number here can be max 5
    vector<lli> b1(46), b2(46), b3(46), b4(46), b5(46); //bx[i] -> count of x length and having sum i


    for(lli i=0; i<n; i++)
    {
        lli sum = 0;
//        cout<<veca[i].size()<<endl;
        for(lli j=0; j<veca[i].size(); j++)
        {
            sum+= (veca[i][j]-'0');
        }

        if(veca[i].size()==1) v1.push_back(veca[i]), b1[sum]++;
        else if(veca[i].size()==2) v2.push_back(veca[i]), b2[sum]++;
        else if(veca[i].size()==3) v3.push_back(veca[i]), b3[sum]++;
        else if(veca[i].size()==4) v4.push_back(veca[i]), b4[sum]++;
        else if(veca[i].size()==5) v5.push_back(veca[i]), b5[sum]++;
    }


    for(lli i=0; i<46; i++) ans += b1[i]*b1[i] + b2[i]*b2[i] + b3[i]*b3[i] + b4[i]*b4[i] + b5[i]*b5[i];


    for(lli i=0; i<v5.size(); i++)
    {
        string s = v5[i];


        lli sum = 0, sumbeg, sumend;
        for(lli j=0; j<s.size(); j++) sum+= (s[j] - '0');


        sumbeg = max(0ll, sum - 2*(s[0]-'0') - 2*(s[1]-'0'));
        sumend = max(0ll, sum - 2*(s[4]-'0')- 2*(s[3]-'0'));

        ans+= (b1[sumbeg]+b1[sumend]);
//        cout<<s<<endl;
//        cout<<sum<<" "<<sumbeg<<" "<<sumend<<" "<<ans<<" "<<b1[sumbeg]<<" "<<b1[sumend]<<endl;

    }

    for(lli i=0; i<v5.size(); i++)
    {
        string s = v5[i];

        lli sum = 0, sumbeg, sumend;
        for(lli j=0; j<s.size(); j++) sum+= (s[j] - '0');
        sumbeg = max(0ll, sum - 2*(s[0]-'0'));
        sumend = max(0ll, sum - 2*(s[4]-'0'));
        ans+= (b3[sumbeg]+b3[sumend]);

//        cout<<s<<endl;
//        cout<<sum<<" "<<sumbeg<<" "<<sumend<<" "<<ans<<" "<<b3[sumbeg]<<" "<<b3[sumend]<<endl;


    }

    for(lli i=0; i<v4.size(); i++)
    {
        string s = v4[i];

        lli sum = 0, sumbeg, sumend;
        for(lli j=0; j<s.size(); j++) sum+= (s[j] - '0');
        sumbeg = max(0ll, sum - 2*(s[0]-'0'));
        sumend = max(0ll, sum - 2*(s[3]-'0'));
        ans+= (b2[sumbeg]+b2[sumend]);


//        cout<<s<<endl;
//        cout<<sum<<" "<<sumbeg<<" "<<sumend<<" "<<ans<<" "<<b2[sumbeg]<<" "<<b2[sumend]<<endl;
    }

    for(lli i=0; i<v3.size(); i++)
    {
        string s = v3[i];

        lli sum = 0, sumbeg, sumend;
        for(lli j=0; j<s.size(); j++) sum+= (s[j] - '0');
        sumbeg = max(0ll, sum - 2*(s[0]-'0'));
        sumend = max(0ll, sum - 2*(s[2]-'0'));
        ans+= (b1[sumbeg]+b1[sumend]);


//        cout<<s<<endl;
//        cout<<sum<<" "<<sumbeg<<" "<<sumend<<" "<<ans<<" "<<b1[sumbeg]<<" "<<b1[sumend]<<endl;
    }

    cout<<ans<<endl;

}
int main()
{
    solve();
}
