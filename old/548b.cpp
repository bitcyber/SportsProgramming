/*
 Time & Date of creation 21:38:11 21/03/2019  
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
    ll n;
    cin>>n;
    vi arr;
    vii maxi;
    int tmp=0;
    for(int i=0;i<n;i++)
    {
        int xx;
        cin>>xx;
        arr.pb(xx);

        if(tmp<=xx)
        {
            tmp = xx;
        }
        else 
        {
            maxi.pb(mp(tmp,i));
        }

    }
    for(int i=0;i<maxi.size();i++)
    {
        cout<<maxi[i].ff<<" "<<maxi[i].ss<<endl;
    }




}