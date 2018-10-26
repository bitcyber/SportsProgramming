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
    int n;
    cin>>n;
    string xx;
    cin>>xx;
    // cout<<xx<<endl;
    char s1;

    if(n<=2)
    {
        if(xx=="11")
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        return 0;
    }

    for(int i=0;i<n-1;i++)
    {
        s1=xx[i];
        if(s1==xx[i+1] && s1=='1')
            {
                cout<<"No"<<endl;
                return 0;
            }
        else if(s1==xx[i+1] && s1==xx[i+2] && s1=='0')
            {
                cout<<"No"<<endl;
                return 0;
            }

    }

cout<<"Yes"<<endl;





}