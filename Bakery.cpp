#include<bits/stdc++.h>
#include<limits.h>
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
typedef pair<ll, ll> pll;
typedef pair<ll, bool> plb;
typedef vector<int> vi;

#define endl "\n"
#define For(i,j,k) for(ll i=j;i<k;i++)
#define Rev(i,j,k) for(ll i=j;i>=k;i--)
#define Rep(i,k)   for(ll i=0;i<k;i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool aa[100001]={false};
int main()

{

    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<pair<int, int > > > roads(n);
    vi bakery;
    // vi flour;

    for(int i=0;i<n;i++)
        bakery.pb(i+1);


    // cout<<"yes " <<bakery[1-1];
    for(int i=0;i<m;i++)
    {
        int u,v,l;
        cin>>u>>v>>l;
        {
            roads[u].pb(mp(v,l));
            roads[v].pb(mp(u,l));
        }
    }

// vector<pair<pair<int,int> int> > bakery(roads.begin(),roads.end());

// cout<<"yes";
cin.ignore();
vector<int> flr;

if(k>0)
    for(int i=0;i<k;i++)
    {
        int tmp;
        cin>>tmp;
        // cout<<"tmp  " <<tmp<<endl;
        flr.pb(tmp);
        aa[tmp]=true;
        // auto pos = find(bakery.begin(),bakery.end(),t);
        // bakery.erase(pos);
    }
else
{
    cout<<-1<<endl;
    return 0;
}

    int mini = INT_MAX;

    // cout<<"No ";
    // for(int i=0;i<k;i++)
    // {
    //     cout<<flr[i]<<" "<<endl;
    // }


// cout<<"roads[top].size()<<endl;  "<<roads[5].size()<<endl;
    // queue<int> q;

    // cout<<"yes"<<endl;

    // cout<<flr[1]<<endl;
    // int flag = false;
    for(int i =0;i<flr.size();i++)
    {
        // q.push(flr[i]);
        // int top=;
    // cout<<"roads["<<top <<"].size() "<<roads[top].size()<<endl;
        // if(roads[top].size()<=n)
        {
            for(int j=0;j<roads[flr[i]].size();j++)
                {
                    if(!aa[roads[flr[i]][j].first])
                    {
                        mini = min(mini, roads[flr[i]][j].second);
                    }
                    // cout<<"min of roads[top][j].second :"<<roads[top][j].second<<endl;
                }
        }
        // q.pop();
    }

cout<<mini<<endl;
    

    // for(int i=0;i<bakery.size();i++)
    //     cout<<bakery[i]<<" "<<endl;





}