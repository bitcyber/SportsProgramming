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
    string s;
    cin>>s;
    int n;
    cin>>n;
    vii l;
    vi z;

    For(i,0,s.size()-1)
    {
        if(s[i]==s[i+1])
            z.pb(1);
        else z.pb(0);
    }

    For(i,0,n)
    {
        int tmp1,tmp2;
        cin>>tmp1>>tmp2;
        l.pb(mp(tmp1,tmp2));
    }

    // For(i,0,n)
    //     cout<<z[i]<<" ";
    // cout<<endl;

    vii::iterator itr=l.begin();



    for(itr=l.begin();itr!=l.end();++itr)
    {
        int counter=0;
        for(int i=itr->first -1;i<itr->second-1;++i)
        {
            counter+=z[i];
        }
        cout<<counter<<endl;
    }


}