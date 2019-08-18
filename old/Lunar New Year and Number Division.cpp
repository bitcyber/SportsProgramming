/*
 Time & Date of creation 21:31:00 11/02/2019  
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
    int n;
    cin>>n;
    vi arr;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        int xx;
        cin>>xx;
        arr.pb(xx);
        // sum+=xx;
    }

    // int avg = sum/n;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n/2;i++)
    {
        sum+= (arr[i]+arr[n-1-i])*(arr[i]+arr[n-1-i]);
    }
    cout<<sum<<endl;




}