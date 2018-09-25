#include<bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/COINS
typedef long long int ll ;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cin.tie(0);
#define endl "\n"
#define max2(a,b) ((a)>(b)?(a):(b))

// ll memo[10000000];

map<int,ll> memo;


ll dollars(ll byte)
{
    // static map<ll,ll> memo;
    if(byte<=12 &&byte>=0)
    {
        if(byte==12)
            return byte +1;
        else return byte ;
    }

    if(memo[byte]!=0) return memo[byte];

    ll bomb = dollars(byte/2) + dollars(byte/3) + dollars(byte/4);

    if(bomb>byte)
        memo[byte]=bomb;
    else
        memo[byte]=byte;
    return memo[byte];
}

int main()
 {  // fast;
    ll n;
    // char tmp =' ';
        while(scanf("%lld",&n)==1)
    {
        // cin>>n;
        // memo[n]=dollars(n);
        printf("%lld"endl,dollars(n));

    }
}