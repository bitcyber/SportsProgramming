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
#define N 100001
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int dp[N][2];

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
        ii boom = arr[i];
        int x = boom.se,y=boom.fi;
        if(i%2==0)
            {
                dp[y][0]=x;
            }
        else
        {
            dp[y][1]=x;
        }
    }


    ll sum=0;
    int cur =1 ;

    for(int i=1;i<=n;i++)
    {
        sum+=abs(cur-dp[i][0]);
        cur= dp[i][0];
        cout<<cur<<" x"<<endl;

    }
    cur =1 ;
    for(int i=1;i<=n;i++)
    {
        sum+=abs(cur-dp[i][1]);
        cur= dp[i][1];
        cout<<cur<<" y"<<endl;


    }
    // sum+=1;
    cout<<sum<<endl;



}