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

int inf = 3*1e8+1;

int main()
{
    fast_io;
    int n;
    cin>>n;
    vi s,c,dp;



    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        s.pb(tmp);
    }

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        c.pb(tmp);
    }

    int minisum=inf;
    int d1,d2,d3;

    for(int i=0;i<n;i++)
    {

        d2=c[i];
        d3= inf;
        d1= inf;

        for(int j=i+1;j<n;j++)
        {
            if(s[j]>s[i])
                d3=min(d3,c[j]);
        }

        for(int j=0;j<i;j++)
            if(s[j]<s[i])
                d1=min(d1,c[j]);

        minisum= min(minisum,d1+d2+d3);
    }




    if(minisum!=inf)
        cout<<minisum<<endl;
    else
        cout<<-1<<endl;

    // cout<< (minisum<inf?minisum:-1)<<endl;
}