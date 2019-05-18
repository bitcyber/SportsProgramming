/*
 Time & Date of creation 22:21:39 25/02/2019  
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


int main()
{
    fast_IO;

    int n;
    cin>>n;

    vi arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());


if(n>3){
    for(int i=0;i<n;i+=2)
    {
        cout<<arr[i]<<" ";
    }

    int j;



    if(n%2==0)
    {
         j= n-1;
    }
    else
         j = n-2;

    for(;j>0;j-=2)
    {
        cout<<arr[j]<<" ";
    }
}
else
{
    for(int i=0;i<n;i+=1)
    {
        cout<<arr[i]<<" ";
    }

}

}