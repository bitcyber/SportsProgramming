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

int main()
{
    int k,n;
    cin>>k>>n;
    vector<string> field(n);
    for(int i =0;i<k;i++)
    {
        // cin.ignore();
        string ss;
        cin>>ss;
        field.pb(ss);
    }


    for(int i =0;i<field.size();i++)
    {
        cout<<field[i]<<endl;
    }
    // cout<<endl;
    // cout<<field[5][5];
}