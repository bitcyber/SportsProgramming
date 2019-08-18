#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define fi  first
#define se  second
#define mp  make_pair
#define pb  push_back
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast_IO;

    int x,y,z;
    cin>>x>>y>>z;

    int a,b,c;
    cin>>a>>b>>c;

    if((a+b+c)>=(x+y+z))
    {
        if(x>a ||(y>(a+b))||z>(a+b+c))
        {
            // cout<<"tes";
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            a=a-x;
            if(a<0)
            {
                cout<<"NO\n";
                return 0;
            }
            int xx=a+b;
            xx=xx-y;
            if(xx<0)
            {
                cout<<"NO\n";
                return 0;
            }
            // cout<<"tes";
            if((c+xx)>=z)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
    else
    {
        cout<<"NO"<<endl;
    }

}