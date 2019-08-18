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
    vi s,c;

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        s.pb(tmp);
    }

    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        c.pb(tmp);
    }

    int minisum=INT_MAX;

    for(int j=1;j<n-1;j++)
    {
        int tmp1,tmp2,tmp3;
        tmp1 = c[j];
        for(int i=0;i<j;i++)
        {
            if(s[j]>s[i])
            {
                tmp2=c[i];
                for(int k=j;k<n;k++)
                {
                    if(s[j]<s[k])
                    {
                        tmp3=c[k];
                        if(minisum>(tmp1+tmp2+tmp3))
                        {
                            minisum=(tmp1+tmp2+tmp3);
                        }
                    }
                }
            }
        }
    }

    if(minisum!=INT_MAX)
        cout<<minisum<<endl;
    else
        cout<<-1<<endl;
}