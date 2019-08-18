#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define endl "\n"
#define fast_io  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int aa[1000007] ={-1};

ll find(vector<ll> &f,ll x)
{
    return (f[x]==x)?x:(f[x]=find(f,f[x]));
}

void merge (vector<ll> &f,ll x, ll y)
{
    f[find(f,x)]= f[find(f,y)];
}

int main()
{

    ll a,b;
    cin>>a>>b;
    vector<ll> f(a);
    for(ll p=0;p<a;p++)
        f[p]=p;

    while(b--)
    {
        ll x,y;
        cin>>x>>y;
        merge(f,x,y);
    }

    map<ll,ll> g;
    for(ll p=0;p<a;p++)
        g[find(f,p)]+=1;


ll total=0;
    for(map<ll,ll>::iterator itr= g.begin();itr!=g.end();++itr)
    {
        ll u = itr->second;
        total += u*(a-u);
    }

cout<<total/2<<endl;

//     // fast_io;
//     ll n,p;

//     cin>>n>>p;
//     vector<int> aa(n,-1);
//     // cin.ignore();
//     for(ll i=1;i<=p;i++)
//     {
//         // ll a,b;
//         // cout<<"yes";
//         // cin.ignore();
//         ll a,b;
// // cout<<"yes";
//         scanf("%lld %lld",&a,&b);
//         // cin.ignore();
//                 // if(cin.peek() != ' ')
//             // cout<<"yes";
//         // v[a].pb(b);
//         // cout<<a<<b;
//         // cout<<"No";
//         // v[b].pb(a);
//         // cin.ignore();
//         // cout<<"yes";
//         if(aa[a]==-1 && aa[b]==-1)
//             {
//                 aa[a] = a;
//                 aa[b] = aa[a];
//                 continue;
//             }
//         else if(aa[a]==-1 && aa[b]!=-1)
//         {
//             aa[a] = aa[b];
//             continue;
//         }
//         else if(aa[b]==-1 && aa[a]!=-1)
//         {
//             aa[b] = aa[a];
//             continue;
//         }
//         // cout<<"yes";
//     }

// // cout<<"NOo";

//     map<ll,int> mp;
//     for(ll i=0;i<n;i++)
//         mp[aa[i]]+=1;

//     // cout<<"yes";

// ll sum =0;
//     for(ll i=0;i<mp.size()-1;i++)
//         {
//             for(ll j=i+1;j<mp.size();j++)
//                 {
//                     sum+= mp[i]*mp[j];
//                 }

//         }

//     cout<<sum<<endl;


}



