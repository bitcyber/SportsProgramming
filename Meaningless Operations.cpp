/*
 Time & Date of creation 20:38:40 07/02/2019  
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


ll gcd(ll a,ll b)
{
    if(b!=0)
    {
        return gcd(b,b%a);
    }
    else return a;

}
int main()
{
    fast_IO;

    int t;
    cin>>t;
    while(t--)
    {
        ll x1;
        cin>>x1;
        for(ll i=1;i<x1;i++)
        {
            // if((i&x1)==0)
                cout<<"i: "<<i<<" gcd: "<<gcd((i^x1),(i&x1))<<" xor: "<<(i^x1)<<" and: "<<(i&x1)<<endl;

        }
        // cout<<gcd(6, 20)<<endl;
    }

}