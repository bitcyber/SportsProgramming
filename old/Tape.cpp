/*
 Time & Date of creation 19:19:37 07/02/2019  
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
    ll n,m,k;
    cin>>n>>m>>k;

    vi arr,diff;
    for(int i=0;i<n;i++)
    {
        int xx;
        cin>>xx;
        arr.pb(xx);
    }
    for(int i=0;i<n-1;i++)
    {
        diff.pb(arr[i+1]-arr[i]);
    }

    sort(diff.begin(),diff.end());
    int sum=0;
    for(int i=0;i<n-k;i++)
    {
        sum+=diff[i];
    }
    sum+=(k);
    cout<<sum<<endl;




}