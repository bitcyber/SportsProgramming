/*
 Time & Date of creation 13:51:40 06/04/2019  
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


ll hola(ll tmp)
{
    ll aa =0;
    ll bb =0;
    int count =0;
    while(tmp>0)
    {
        count++;
        bb = tmp%10;
        if(bb==4)
        {
            aa = 3*pow(10,count) +aa;
        }
        else
        {
           aa=  bb*pow(10,count) +aa;
        }
        tmp = tmp/10;
    }
    return aa/10;
}
int main()
{
    fast_IO;
    int t;
    cin>>t;
    int ab = 0;
    while(t--)
    {
        ab++;
        ll n;
        cin>>n;
        ll xx =n;
        ll yy = 0;
        yy = hola(n);
        ll zz = n-yy;
        cout<<"Case #"<<ab<<": "<<yy<<" "<<zz<<endl;
    }
}