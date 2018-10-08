#include<bits/stdc++.h>
#include<limits.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

// #define mp make_pair
// #define
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef map<string,int> msi;


ll digisum(ll x)
{
    ll tmp = x;
    ll sum = 0;
    while(tmp>0)
    {
        sum+=tmp%10;
        tmp/=10;
    }
    return sum;
}

ll mini;
ll mincount;
unordered_map<ll,ll> mp;

void func(ll num,ll count, ll d)
{
    ll num1 = num;
    ll c =0;
    if(num1>9)
    {
        c++;
        num1= digisum(num1);
    }
    if(mp.find(num1)!=mp.end())
    {
        mp[num1]=count+c;
        mini = num1;
        mincount = count+c;
    }
    else if(mini==num1)
    {
        if(mincount>(count+c))
        {
            mincount=count+c;
        }
    }

    func(num+d,count+1,d);
    func(num1,count+c,d);
    mp.erase(num1);
}


int main()
{
    fast_io;
    int t;
    cin>>t;
    cout<<1<<endl;
    while(t--)
    {    ll n,d;
        cin>>n>>d;
        mini = INT_MAX;
        mincount = INT_MAX;
        cout<<"yes";
        func(n,0,d);
        cout<<mini<<" "<<mincount<<endl;

    }

}

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

}#include<bits/stdc++.h>
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

}