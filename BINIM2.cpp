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
        int n;
        string s;
        cin>>n>>s;
        int p;

        if(s=="Dee")
            p=0;
        else p=1;

        vector<string > stck;
        For(i,0,n)
        {
            cin.ignore();
            string xx;
            cin>>xx;
            stck.pb(xx);
        }


    int toggle=p;
        while(1)
        {
            if(toggle==0)
            {

                For(i,0,n)
                {
                    if(stck[i][0]=='0')
                    {

                    }
                }
                toggle=1;
            }
            else
            {

                toggle=0;
            }

        }
        // For(i,0,n)
        // {
        //     cout<<stck[i][0]<<endl;
        //     // cin.ignore();
        //     // string xx;
        //     // cin>>xx;
        //     // stck.pb(xx);
        // }

    }

}