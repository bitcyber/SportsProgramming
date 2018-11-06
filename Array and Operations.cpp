/*
 Time & Date of creation 04:44:41 03/11/2018  
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
    int n,m;
    cin>>n>>m;
    vector<ll> aa(n);

    for(int i=0;i<n;i++)
        cin>>aa[i];

    vvi gg(n);

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        gg[a].pb(b);
        gg[b].pb(a);

    }



}