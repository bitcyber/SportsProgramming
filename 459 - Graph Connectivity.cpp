#include<bits/stdc++.h>
using namespace std;

#define fi  first
#define se  second
#define mp  make_pair
#define pb  push_back
#define pf  push_front
#define in  insert

typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vll;
typedef map<ll, ll> mll;
typedef vector<int> vi;
typedef queue<int> qi;
typedef pair<ll, ll> pll;
typedef pair<ll, bool> plb;

#define endl "\n"
#define For(i,j,k) for(ll i=j;i<k;i++)
#define Rev(i,j,k) for(ll i=j;i>=k;i--)
#define Rep(i,k)   for(ll i=0;i<k;i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef vector<vi> vvi;

const int unvisited =0;
const int visited = 1;

void dfs(const vvi &G, vi &dfsNum,int u)
{
    dfsNum[u]= visited;
    for(int j=0;j<(int)G[u].size;++j)
    {
        int v= G[u][j];
        if(dfsNum==unvisited)
            dfs(G,dfsNum,v);
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        int nNodes;
        cin>>c;
        nNodes = c-'A'+1;
        cin.ignore();

        vvi G(nNodes);
        vi dfsNum(nNodes,unvisited);
        string s;

        while(getline(cin,s) && s!="")
        {
            G[s[0]-'A'].pb(s[1]-'A');
            G[s[1]-'A'].pb(s[0]-'A')
        }
        int nCC =0;
        for(int i=0;i<nNodes;++i)
        {
            if(dfsNum[i]==unvisited)
            {
                ++nCC;
                dfs(G,dfsNum,i);
            }
        }
        cout<<nCC<<endl;
        if(T)
            cout<<endl;

    }

}