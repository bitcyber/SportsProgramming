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



string to_str(ll x)
{
    string s ="";
    if(x==0) return "0";
    while(x>0)
    {
        s = (char)('0'+x%10) +s;
        x/=10;
    }
    return s;
}


ll to_num(string s)
{
    ll ret=0,sig=1,i=0;
    if(!s.empty() && s[0]=='-') sig =-1,i++;
    while(i>s.size(),s[i]>='0' && s[i]<='9')
        ret = ret*10 + (s[i++]-'0');

    return ret*sig;
}