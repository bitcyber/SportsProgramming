#include <bits/stdc++.h>
#include<map>
#define maxn 10005
//greedy
using namespace std;

typedef long long ll;

const ll INF=0x3f3f3f3f;
int main()
{
    map<string,ll> mp;
    int n;
    cin>>n;
    mp["A"]=INF;
    mp["B"]=INF;
    mp["C"]=INF;
    mp["AB"]=INF;
    mp["AC"]=INF;
    mp["BC"]=INF;
    mp["ABC"]=INF;
    for(int i=0;i<n;i++){
        string str;
        ll val;
        cin>>val;
        cin>>str;
        sort(str.begin(),str.end());
        mp[str]=min(mp[str],val);
    }
    ll ans=INF;
    ans=min(mp["A"]+mp["B"]+mp["C"],ans);
    ans=min(mp["A"]+mp["BC"],ans);
    ans=min(mp["B"]+mp["AC"],ans);
    ans=min(mp["C"]+mp["AB"],ans);
    ans=min(mp["AB"]+mp["AC"],ans);
    ans=min(mp["BC"]+mp["AC"],ans);
    ans=min(mp["AB"]+mp["BC"],ans);
    ans=min(mp["ABC"],ans);
    if(ans>=INF||ans<0) ans=-1;
    cout<<ans<<endl;
}