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


int main()
{
    fast_io;
    ll a,b,c;
    cin>>a>>b;
    c=b;
    if((b<1 && a>1) or (b>a*9))
    {
        cout<<"-1 -1"<<endl;
        return 0;
    }

    Rev(i,a-1,0)
    {
        ll j = max(0ll, c-9*i);
        if(i==a-1 && j==0 && c) j=1;
        cout<<j;
        c-=j;
    }
    cout<<" ";

    Rev(i,a-1,0)
    {
        ll j = min(9ll,b);
        b-=j;
        cout<<j;
    }
    cout<<endl;







    // ll largest=9;
    // int tmp2 = int(pow(10,m-1));

    // if(s==0)
    // {
    //     cout<< (m===1?"0 0":"-1 -1")<<endl ;
    //     return 0;
    // }

    // if(s>m*9 )
    //     {
    //         cout<<-1<<" "<<-1<<endl;
    //         return 0;
    //     }

    // int tmp = s/9;
    // int tmp1 = s%9;
    // for(int i =1;i<tmp;i++)
    //     largest = largest*10 +9;
    // if(tmp1!=0)
    //     largest = largest*10 + tmp1;
    // for(int i = tmp+2;i<m;i++)
    //     largest = largest*10 ;
    // // cout<<largest<<endl;






}