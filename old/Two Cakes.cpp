/*
 Time & Date of creation 21:29:43 24/02/2019  
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

    int n;
    cin>>n;
    vii arr(2*n);

    for(int i=0;i<2*n;i++)
    {
        cin>>arr[i].fi;
        arr[i].se = i+1;
    }

    sort(arr.begin(),arr.end());
    vi c,d;

    for(int i=0;i<arr.size();i++)
    {
        if(i%2==0)
            {
                c.pb(arr[i].se);
            }
        else
        {
            d.pb(arr[i].se);
        }
    }

    ll sum=0;
    int cur =1 ;
    for(int i=0;i<n;i++)
    {
        sum+=abs(cur-c[i]);
        cur = c[i];
    }
    cur=1;
    for(int i=0;i<n;i++)
    {
        sum+=abs(cur-d[i]);
        cur =d[i];
    }
    // sum+=1;
    cout<<sum<<endl;


}