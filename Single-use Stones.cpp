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
typedef vector<int> vi;
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
    int w,l;
    cin>>w>>l;

    vi stones;
    for(int i=0;i<w-1;i++)
    {
        int tmp;
        cin>>tmp;
        stones.pb(tmp);
    }

    int fcount =0;

int pos=l;
    while(pos>0)
    {
        // for(int i=l;i>0;i--)
        if(stones[pos-1]!=0)
        {
            stones[pos-1]--;
            pos +=l;
        }
        else
            {
                pos--;
                continue;
            }

        if(pos>=w)
            {
                fcount++;
                pos=l;
            }
    }

    cout<<fcount<<endl;


}