/*
 Time & Date of creation 21:55:54 30/10/2018  
 Author : Amit Kumar
 Copyright © amit2rockon. All rights reserved.
*/
#include<bits/stdc++.h>
#include<limits.h>
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
    int n,k;
    cin>>n>>k;
    vi hh(n+1,0);
    vi bb;

    int sum=0;
    int mini =INT_MAX;

    int count=0,index=0;;

    for(int i=1;i<=n;i++)
    {
        cin>>hh[i];
        sum+=hh[i];
        if(i>=k)
        {
            bb.pb(sum);
            count++;
            if(mini>sum)
                {
                    mini=sum;
                    index=count;
                }
            sum-=hh[i-k+1];
        }

    }

    // for(int i=0;i<bb.size();i++)
    // cout<<bb[i]<<" ";
    cout<<index<<endl;




}