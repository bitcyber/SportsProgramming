/*
 Time & Date of creation 19:58:20 09/02/2019  
 Copyright © amit2rockon. All rights reserved. 
*/
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
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,k,n;
        cin>>x>>y>>k>>n;

        vii arr;
        bool flag=0;

        for(int i=0;i<n;i++)
        {
            int p,c;

            cin>>p>>c;
            if((x-y)<=p && k>=c)
                {
                    flag=1;
                    // break;
                    // cout<<"LuckyChef"<<endl;
                }
            // else
            //     {
            //         flag=0;
            //         // cout<<"UnluckyChef"<<endl;
            //     }

            // arr.pb(make_pair(p,c));
        }
            if(flag)
            {
                cout<<"LuckyChef"<<endl;
            }
        else
            {
                cout<<"UnluckyChef"<<endl;
            }
            // flag=0;

    }

}