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


ll gcd(ll a,ll b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}



int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        unsigned long long float p,q,b;
        cin>>p>>q>>b;

        ll d= gcd(p,q)
        p/=d;
        q/=d;
        while(1)
        {
            d= gcd(q,b);

            if(d==1)
                break;
            while(q%d==0) q/=d;
        }
    if (b%q==0||q%b==0||!q) printf("Finite\n");
    else printf("Infinite\n");

    }
}