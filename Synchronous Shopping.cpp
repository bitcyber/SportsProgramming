#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string,int> msi;

#define fi  first
#define se  second
#define mp  make_pair
#define pb  push_back
#define pf  push_front
#define in  insert
#define endl "\n"
#define For(i,j,k) for(ll i=j;i<k;i++)
#define Rev(i,j,k) for(ll i=j;i>=k;i--)
#define Rep(i,k)   for(ll i=0;i<k;i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
    fast_io;
    int n,m,k;
    cin>>n>>m>>k;
    vi sc[n];

    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        for(int j=0;j<t;j++)
            {
                int tmp;
                cin>>tmp;
                sc[i].pb(tmp);
            }
    }
    vii graph[m];

    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        graph[a].pb(mp(b,w));
        graph[b].pb(mp(a,w));
    }


    

}