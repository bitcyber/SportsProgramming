/*
 Time & Date of creation 18:07:23 26/10/2018  
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
typedef set<int> si;
typedef map<string,int> msi;

#define fi  first
#define se  second
#define mp  make_pair
#define pb  push_back
#define pf  push_front
#define in  insert
#define endl "\n"
#define For(i,j,k) for(ll i=j;i<k;i++)
#define Rev(i,j,k) for(ll i=j;i>=k;i--)
#define Rep(i,k)   for(ll i=0;i<k;i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// int bs(vi& xx,int l,int r,int y)
// {
//     int mid;
//     while(l<r)
//     {
//         mid = (l+r)/2;

//         if(y==xx[mid])
//             return mid;
//         if(y<xx[mid])
//             r=mid+1;
//         else
//             l= mid-1;


//     }
//     if(xx[mid]>y)
//         return mid-1;
//     else
//         return mid;


// }

int main()
{
    fast_io;

    ll n;
    cin>>n;
    vi xx;
    for(ll i=0,tmp;i<n;i++)
    {
        cin>>tmp;
        xx.pb(tmp);
    }
    sort(xx.begin(),xx.end());

    ll q;
    cin>>q;
    vi m;
    for(ll i=0,tmp;i<q;i++)
    {
        // cin>>tmp;m.pb(tmp);
        cin>>tmp;
        // int xt = bs(xx,0,n-1,tmp);
        // cout<<xt<<endl;

        auto low = upper_bound(xx.begin(),xx.end(),tmp);
        int index= (int)(low-xx.begin());
        // if(tmp!=xx[index])
        cout<<index<<endl;



    }

}