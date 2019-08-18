/*
 Time & Date of creation 17:18:03 02/11/2018  
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

#define fi first
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
    int n,e,x;
    cin>>n>>e>>x;
    vi ppl(n);
    vi pod(n);
    for(int i=0;i<n;i++)
        cin>>ppl[i];

    for(int i=0;i<n;i++)
        cin>>pod[i];


    vvii GG(n+1);
    for(int i=0;i<e;i++)
    {
        int x,y,t;
        cin>>x>>y>>t;
        GG[x].pb(mp(y,t));
        GG[y].pb(mp(x,t));

    }


    vvii::iterator itr;

    for(itr=GG.begin();itr!=GG.end();++itr)
        cout<<itr;

}