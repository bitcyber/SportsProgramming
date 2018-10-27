/*
 Time & Date of creation 22:12:40 26/10/2018  
 Author : Amit Kumar
 Copyright © amit2rockon. All rights reserved. 
*/
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vl h,c;
        for(ll i=0,tmp;i<n;i++)
        {
            cin>>tmp;
            h.pb(tmp);
        }

        for(ll i=0,tmp;i<n;i++)
        {
            cin>>tmp;
            c.pb(tmp);
        }

        int maxi=h[n-1];
        map<ll ,ll> mp;
        mp[c[n-1]]=1;

        for(ll i=n-1;i>=0;i--)
        {
            if(h[i]>maxi)
            {
                mp[c[i]]=1;
                maxi=h[i];
            }
        }
        cout<<mp.size()<<endl;
    }

}