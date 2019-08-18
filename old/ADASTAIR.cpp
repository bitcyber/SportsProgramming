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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vi h;
        int tmp1 =0;
        int counter =0;
        For(i,0,n)
        {
            int tmp;
            cin>>tmp;

            // h.pb(tmp);
            int tmp2 = (tmp-tmp1)/k;
            if((tmp-tmp1)%k==0 && tmp2>0)
                tmp2-=1;
            counter+=tmp2;
            tmp1 =tmp;
        }
        cout<<counter<<endl;
    }

}