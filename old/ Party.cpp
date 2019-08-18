 #include<bits/stdc++.h>
using namespace std;

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

typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vll;
typedef queue<int> qi;
typedef vector<int> vi;
typedef map<ll, ll> mll;
typedef map<int,int> mii;
typedef pair<ll, ll> pll;
typedef pair<ll, bool> plb;

vi adj[2001];
int level[2001];

int main()
{

    fast_io;
    int i,j,n,k,l,tmp ,maxi=0;
    cin>>n;
    vi v;
    for(i=1;i<=n;i++)
    {
        cin>>tmp;
        if(tmp==-1)
            v.pb(i);
        else
            adj[tmp].pb(i);
    }
    // cin.ignore();


    for(j=0;j<v.size();j++)
    {
        int count=0,top2;
        int top=v[k];
        qi q;
        q.push(top);

        if(adj[top].size()==0)
            continue;
        while(!q.empty())
        {
            top= q.front();
            for(i=0;i<adj[top].size();i++)
            {
                top2= adj[top][i];
                level[top2] =level[top]+1;
                q.push(top2);
            }
        }
        q.pop();

        if(maxi<level[top2])
            maxi=level[top2];
    }

cout<<maxi+1<<endl;


    // int n;
    // cin>>n;
    // mii dis;
    // vi arr;
    // qi roots;

    // vector<list<int> > lis;

    // int j=0;
    // for(int i=1;i<=n;i++)
    // {
    //     int tmp;
    //     cin>>tmp;
    //     if(tmp==-1)
    //         {
    //             roots[j].pb(i);
    //             j++
    //             dis[i]=0;
    //         }
    //     else
    //         dis[i] = dis[tmp]+1;
    //     arr.pb(tmp);
    // }
    // int tmp=0;


    // for(int i=1;i<=n;i++)
    // {
    //     if(tmp<dis[i])
    //         tmp=dis[i];
    //     // cout<<dis[i]<<" ";
    // }

    // cout<<endl<<"final longest depth : "<<tmp+1<<endl;


}