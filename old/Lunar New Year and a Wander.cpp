/*
 Time & Date of creation 22:08:51 11/02/2019  
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
    ll n,m;
    cin>>n>>m;
    vi arr[n+1];
    // vi xr;
    for(int i=0;i<m;i++)
    {
        int xx,yy;
        cin>>xx>>yy;
        arr[xx].pb(yy);
        arr[yy].pb(xx);
    }

    set<int> ss;
    set<int> xx;

    ss.insert(1);
    xx.insert(1);

    vi boom;

    while(!ss.empty())
    {
        int k = *ss.begin();
        ss.erase(ss.begin());
        boom.push_back(k);

        for(int tmp : arr[k])
        {
            if(xx.find(tmp)==xx.end())
            {
                ss.insert(tmp);
                xx.insert(tmp);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<boom[i]<<" ";
    }
    cout<<endl;






}