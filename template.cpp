#include <bits/stdc++.h>
using namespace std;

//--------------------------Template Start---------------------------//
#define ll long long int
#define dd double
#define ull unsigned long long int
#define vi vector<int>
#define vvi vector< vector<int> >
#define vll vector<ll>
#define vd vector<double>   
#define pi pair<int, int>
#define pll pair<long long int, long long int>
#define pb(x) push_back(x)
#define sz size()
#define mp(x,y) make_pair(x,y)
#define fr(t,i,x) for(int i=t; i<x; ++i)
#define endl "\n"
#define fi first
#define se second
#define dbg1(a) cout<<#a<<" = "<<a<<endl;
#define dbg2(a, b) cout<<#a<<" = "<<a<<", "<<#b<<" = "<<b<<endl;
#define dbg3(a, b, c) cout<<#a<<" = "<<a<<", "<<#b<<" = "<<b<<", "<<#c<<" = "<<c<<endl;
#define dbg4(a, b, c, d) cout<<#a<<" = "<<a<<", "<<#b<<" = "<<b<<", "<<#c<<" = "<<c<<", "<<#d<<" = "<<d<<endl;
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define print_time cout<<"\nTotal Time : "<<(double)(-tstart + clock())/CLOCKS_PER_SEC<<" sec"<<endl;
#define mod 1000000007

/* finding (a^b) % p */
ll power(ll a, ll b, ll p)
{
    ll res = 1;
    a %= p;
    while(b!=0)
    {
        if(b%2)
            res = (res%p*a%p)%p;
        b /= 2;
        a = (a%p*a%p)%p;
    }
    return res;
}

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a%b) : a;
}

//-------------------------Template End-----------------------------//