/*
 Time & Date of creation 21:29:08 28/04/2019  
 Author : Amit Kumar
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

#define ff  first
#define ss  second
#define mp  make_pair
#define pb  push_back
#define N 100001
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast_IO;
    ll t;
    cin>>t;
    int roll=1;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        set<int> cc,dd;
        for(int i=0;i<n;i++)

            {
                int xx;
                cin>>xx;
                cc.insert(xx);
            }
        for(int i=0;i<n;i++)
           {
                int xx;
                cin>>xx;
                dd.insert(xx);
           }




        auto itc=cc.begin();
        ll count=0;

        for(;itc!=cc.end();itc++)
        {
            auto itd =dd.begin();
            for(;itd!=dd.end(); itd++)
            {
                ll t1= *itc;
                ll t2 = *itd;
                ll boo =abs(t1-t2);
                if(boo<=k)
                    count++;
                else break;
            }
        }

        cout<<"Case #"<<roll<<": "<<count;
        roll++;

    }

}