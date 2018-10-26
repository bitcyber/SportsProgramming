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

const int N = 100010;
const int M = 110;

vi e[N];
int a[N];
int dis[N][M];
bool vis[N];

int main()
{
    fast_io;
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    // cin.ignore();

    for(int i=1;i<=n;++i)
    {
       cin>>a[i];
    }

    for(int i=0,a,b;i<m;++i)
    {
        cin>>a>>b;
        e[a].pb(b);
        e[b].pb(a);
    }
    for(int i=1;i<=k;++i)
    {
        memset(vis,0,sizeof(vis));
        queue<int> q;

        for(int j=1;j<=n;++j)
        {
            if(a[j]==i)
            {
                vis[j]=true;
                q.push(j);
            }
        }
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(auto v: e[u])
            {
                if(!vis[v])
                {
                    vis[v]=true;
                    dis[v][i]=dis[u][i]+1;
                    q.push(v);
                }
            }

        }
    }

    for(int i=1;i<=n;++i)
    {
        sort(dis[i]+1,dis[i]+1+k);
        ll sum=0;
        for(int j=1;j<=s;++j)
        {
            sum+=dis[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;

return 0;
}

//important