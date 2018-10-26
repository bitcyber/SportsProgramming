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

#define maxi 1010


int main()
{
    int n,m;
    cin>>n>>m;
    vii noroad;
    bool arr[maxi];
    memset(arr,true,sizeof(arr));

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a-1] = false;
        arr[b-1] = false;
        noroad.pb(mp(a,b));
    }

    int pos=-1;

    for(int i=0;i<n;i++)
    {
        // cout<<" arr["<<i+1<<"]"<<" :"<<arr[i]<<endl;
        if(arr[i]==true)
            {
                pos = i+1;
                break;
            }

    }

    cout<<n-1<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i!=pos)
            cout<<pos<<" "<<i<<endl;
    }
    // cout<<pos<<endl;





}