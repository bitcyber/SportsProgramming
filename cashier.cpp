#include<bits/stdc++.h>
#include <cstring>
#include<limits.h>
using namespace std;

#define ll long long int
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

#define mp make_pair
#define pb push_back
// #define
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<pair<ll,ll> > vll;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string,int> msi;


bool place[1010]={false};

int main()
{
    fast_io;
    ll n,l,a;
    cin>>n>>l>>a;

        vll tt(n);

    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        memset(place+x,true,y);
        tt.pb(mp(x,y));
    }

    // cout<<place[1];

    int count =0;
    // cout<<"yes";

    for(ll i=1;i<l;i+=a)
    {
        if(place[i]==false)
            count+=1;
        // cout<<place[i]<<" "<<i<<endl;
    }

    cout<<count<<endl;



    // vll::iterator x,y;
    // sort(tt.begin(),tt.end());

    // for(ll p=0;p<=l;p+=a)
    // {
    //     // x = lower_bound(tt.begin(),tt.end(),p);
    //     // y = upper_bound(tt.begin(),tt.end(),p);

    //     // cout<<x->first<<" "<<y->first<<endl;


    // }


}