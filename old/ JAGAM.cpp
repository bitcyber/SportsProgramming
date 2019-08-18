#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define speedup ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    speedup;

    ll n,m,t,i,j,z1,z2,count;
    cin>>t;
    while(t--)
    {
        map<ll,int> mp;
        mp.clear();
        cin>>n>>z1>>z2;
        ll a[n];
        bool flag =1;
        for(i=0;i<n;i++){ cin>>a[i]; mp[a[i]]=1; mp[-a[i]]=1; }
        if(mp[z1]==1||mp[z2]==1){cout<<1<<endl;continue;}
        else
        {
            for(count =0,i=0;i<n;i++)
            {
                if( mp[z1-a[i]] || mp[z2-a[i]] ) count++;
                if( mp[z2 + a[i]] || mp[z2 + a[i]]) count++;
            }
        }
        if(count==2*n) cout<<2<<endl;
        else cout<<0<<endl;
    }
return 0;
}