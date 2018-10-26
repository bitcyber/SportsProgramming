#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
// typedef vector<ll>
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
#define Rep(i,k)   for(ll i=0;i<k;i++)w
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//bipartite

bool visited[100010]={false};
int par[10010]={-1};
const int unvisited =0;
const int visited =1;

vvi Graph;
vi color ;
vi vc[2];

bool dfs(int index,int c=2)
{
    color[index]=c;
}


// vvl edge


int main()
{
    ll n,m;
    cin>>n>>m;

    vi dfsnum(n,unvisited);

    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        edge[a].pb(b);
        edge[b].pb(a);
    }
}