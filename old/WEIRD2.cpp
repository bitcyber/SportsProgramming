/*
 Time & Date of creation 19:33:13 27/10/2018  
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
        ll n;
        cin>>n;
        // vi aa;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            ll tmp;
            cin>>tmp;
            mp[tmp]+=1;
            // aa.pb(tmp);
        }

        // cout<<mp.size()<<endl;

        map<ll,ll>::iterator itr1,itr2;
        // cout<<itr->fi<<endl;
        ll counter=0;

        for(itr1=mp.begin();itr1!=mp.end();++itr1)
        {
            int a= itr1->se;
            int b = itr1->fi;

            for(itr2=mp.begin();itr2!=mp.end();++itr2)
            {
                if(itr2->fi<=a)
                {
                    if(itr2->se>=b)
                        counter++;
                }
                else break;
            }

        }

        cout<<counter<<endl;

    }

}