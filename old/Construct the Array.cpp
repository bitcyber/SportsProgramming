/*
 Time & Date of creation 17:52:45 06/02/2019  
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
    ll n,k,x;
    cin>>n>>k>>x;

    if(n==3)
    {
        if(x==1)
        {
            cout<< k-1;
        }
        else
            cout<<k-2;

        cout<<endl;
        return 0;
    }
    else if(k==2)
    {
        return 0;
    }

    else
    {

    ll tmp=k-1;
    ll ans = (pow(tmp,n-3) ) + (tmp-1);
    cout<<ans<<endl;

    }
}