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


// ll arrsum()


int main()
{
    fast_io;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vi a;

        For(i,0,n)
        {
            ll tmp;
            cin>>tmp;
            a.pb(tmp);
        }
        sort(a.begin(),a.end());
        vi::iterator low;
        low= upper_bound(a.begin(),a.end(),k);
        ll j= ll(low-a.begin());

        ll sum=0;

        if(j>=n)
        {
            for(ll i=0;i<n;i++)
                sum+=a[i];
            cout<<sum<<endl;
            continue;
        }

        // For(i,0,n)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl<<"j "<<j<<endl;

        while(j<n-1)
        {
            ll tmp1;
            tmp1 = a[j]-k;
            a[j]=k;
            a[j+1]-=tmp1;
            // j++;
            low= upper_bound(a.begin(),a.end(),k);
            j= ll(low-a.begin());
            // cout<<"j "<<j<<endl;
        }

        // For(i,0,n)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;


        for(ll i=0;i<n;i++)
            sum+=a[i];
        cout<<sum<<endl;
    }

}