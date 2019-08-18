/*
 Time & Date of creation 09:29:13 14/02/2019  
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
    ll n,m,k;
    cin>>n>>m>>k;
    vii arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(),arr.end(),greater<ii>());

    // for(int i=0;i<arr.size();i++)
    // {
    //     cout<<arr[i].fi<<" ";
    // }


    vi ind(m*k);

    ll sumbeauty=0;

    for(int i=0;i<m*k;i++)
    {
        sumbeauty+=arr[i].fi;
        ind[i]= arr[i].se;
    }
    vi division(k-1);


    sort(ind.begin(),ind.end());
    // for(int p:ind)
    //     cout<<p<<" ";
    // cout<<endl;



    for(int i=0;i<k-1;i++)
    {
        division[i]= ind[(i+1)*m-1];
        // cout<<(i+1)*m-1<<" "<<division[i]<<endl;
    }

    cout<<sumbeauty<<endl;
    for(int p:division)
    {
        cout<<p+1<<" ";
    }
    cout<<endl;

}