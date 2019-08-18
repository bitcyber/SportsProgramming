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


int main()
{
    fast_io;
    map<string,string> mp1;
    // mp1.insert()
    mp1["purple"]="Power";
    mp1["blue"]="Space";
    mp1["orange"]="Soul";
    mp1["green"]="Time";
    mp1["red"]="Reality";
    mp1["yellow"]="Mind";
    int n;
    cin>>n;
    map<string,int> mp;

    for(int i=1;i<=n;i++)
    {
        string xx;
        cin>>xx;
        mp[xx]=1;
    }

    cout<<6-n<<endl;

map<string,string>::iterator itr=mp1.begin();
    for(;itr!=mp1.end();++itr)
    {
        if(mp[itr->first]!=1)
            cout<<itr->second<<endl;
    }
}