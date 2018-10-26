#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define ll long long int
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cou.tie(0);
#define endl "\n"

#define mp make_pair
// #define
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string,int> msi;

vii edges[100010];
ll dis[100010];
int par[100010] = {0};
bool visited[100010] ={false};
priority_queue<ii> q_dij;
void dijkstra(int source,int dest)
{
    dis[source]=0;
    par[source]=0;
    visited[source]=true;
    q_dij.push(mp(visited[source],source));

    while(q_dij.empty()==false)
    {
        int s = q_dij.top().second;
            if(s==dest)
                return;
            visited[s]=true;
            q_dij.pop();
            for(ll i=0;i<edges[s].size();i++)
            {
                if(!visited[edges[s][i].first] && dis[edges[s][i].first]>dis[s]+edges[s][i].second)
                {
                    dis[edges[s][i].first]= dis[s]+edges[s][i].second;
                    par[edges[s][i].first] = s;
                    q_dij.push(mp(-dis[edges[s][i].first],edges[s][i].first));
                }
            }
    }
}


void print_path (int source,int n)
{
    if(n==source)
        cout<<source<<" ";
    else if(par[n]==0)
        cout<<-1;
    else
        {
            print_path(source,par[n]);
            cout<<n<<" ";
        }
}




int main()
{

        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            dis[i]=1e12;

        // cout<<dis[3]<<endl;

        for(int i=1;i<=m;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            edges[a].push_back(mp(b,c));
            edges[b].push_back(mp(a,c));
        }



    dijkstra(1,n);
    print_path(1,n);

    // cout<<mini;
    // int n,m;
    // cin>>n>>m;
    // vector<pair<int,int> >  edges(n+1);
    // vector<ll> f(n+1,-1);
    // for(ll p=1;p<=n;p++)
    //     f[p]=p;


    // for(int i=0;i<m;i++)
    // {
    //     int x,y,w;
    //     cin>>x>>y>>w;
    //     edges[x].push_back(make_pair(y,w));
    //     edges[y].push_back(make_pair(x,w));
    //     {
    //         f[y]=find(f,x);
    //     }
    // }

    // for(ll p=1;p<f.size();p++)
    //     cout<<"f["<<p<<"] "<<f[p]<<endl;
    // if(f[n]==1)
    //     {
    //         // cout<<"Yes"<<endl;


    //     }
    // else
    //     cout<<-1<<endl;
}