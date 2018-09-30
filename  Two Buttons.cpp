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
typedef pair<ll, ll> pll;
typedef pair<ll, bool> plb;

#define endl "\n"
#define For(i,j,k) for(ll i=j;i<k;i++)
#define Rev(i,j,k) for(ll i=j;i>=k;i--)
#define Rep(i,k)   for(ll i=0;i<k;i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool used[1000001] = {false};
queue<ll> q;
ll n,m,i,d[1000001] ={0};

int main()
{
    fast_io;

    cin>>n>>m;
    q.push(n);
    used[n] = true;

    while(!q.empty())
    {
        i = q.front();
        q.pop();
        if(!used[i*2] && i*2<=m*2)
        {
            used[i*2]=true;
            q.push(i*2);
            d[i*2]= d[i]+1;
        }
        if(!used[i-1] && i-1>=0)
        {
            used[i-1]=true;
            q.push(i-1);
            d[i-1]=d[i]+1;
        }

        if(used[m])
        break;
    }

    cout<<d[m]<<endl;


    // ll n,m,tmp;
    // cin>>n>>m;
    // int count=0;
    // tmp = m;
    // if(tmp>n)
    // {
    //     while(tmp>n)
    //     {
    //         tmp = ceil(float(tmp)/2);
    //         // cout<<tmp<<" ";
    //         if(tmp%2==1)
    //             count +=2;
    //         else count++;
    //     }
    //     if(m%2==0)
    //     count--;
    //     }
    // // cout<<" tmp"<<tmp;
    // if(tmp<n)
    //     count+=(n-tmp);

    // cout<<count<<endl;

}