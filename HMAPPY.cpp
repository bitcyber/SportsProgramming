#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

#define mp make_pair
// #define
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string,int> msi;


int main()
{
    fast_io;
    ll n,m;
    cin>>n>>m;
    ll a[n],b[n];

    priority_queue<pair<ll,ll > > q;
    vector<int> mul;


    for(ll i=0;i<n;i++)
            cin>>a[i];
    for(ll i=0;i<n;i++)
        {
            cin>>b[i];
            // q.push(make_pair((a[i]*b[i]),i));
            mul.push_back(a[i]*b[i]);
        }



    while(m--)
    {
        int maxi = mul[0];
        int secmaxi = mul[1];

        for(int i=0;i<n;i++)
        {
            if(mul[i]>maxi)
            {
                secmaxi=maxi;
                maxi=mul[i];
            }
        }

    for(int j=0;j<n;j++)
    {
        if(mul[j]==maxi)
        {
            mul[j]=mul[j]-b[j];
            break;
        }
    }



    }

    int ans = mul[0];
    for(int j=0;j<n;j++)
    {
        if(mul[j]>ans)
        {
            ans=mul[j];
        }
    }

    cout<<ans<<endl;
    // {
    //     auto top = q.top();
    //     ll x = top.second;
    //     a[x]-=1;
    //     ll mul1 = a[x]*b[x];
    //     ll mul2 = top.first;
    //     top.second = mul1;
    //     // cout<<"mul1 : " << mul1 << " mul2 : " <<mul2<<endl;
    //     if(mul2>mul1)
    //         {
    //             q.pop();
    //             q.push(make_pair(mul1,x));
    //         }
    // }

    // cout<<q.top().first<<endl;
}