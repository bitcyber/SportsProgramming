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


const int MAX = 100010;
int dp[MAX];

int main()
{
    fast_io;
    int m;
    string str;
    cin>>str>>m;
    cout<<str.size()<<endl;

    for(int i=1;i<str.size();i++)
    {
        if(str[i]==str[i-1])
            dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];

    }

    while(m--)
    {
        int a,b;
        cin>>a>>b;
        cout<<dp[b-1]-dp[a-1]<<endl;
    }

}