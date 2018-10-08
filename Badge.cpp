#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


// int badge[1010]={2};
// #define ll long long

int dfs (int a,bool visit[],vector<ll> &v)
{
    if(visit[a]==1) return a;
    visit[a]=1;
    return dfs(v[a],visit,v);
}

int main()
{
    int n;
    cin>>n;
    vector<ll > v(n+1);
    v[0]=0;
    for(int i=1;i<=n;i++)
        cin>>v[i];

    for(int i=1;i<=n;i++)
    {
        bool visit[n+1];
        memset(visit,0,sizeof(visit));
        cout<<dfs(i,visit,v)<<endl;
    }

}