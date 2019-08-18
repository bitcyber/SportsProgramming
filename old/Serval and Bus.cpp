/*
 Time & Date of creation 19:47:11 13/04/2019  
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


int main()
{
    fast_IO;
    int n,t;
    cin>>n>>t;

    vi arr(n),brr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i]>>brr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>=t)
        {
            cout<<i+1<<endl;
            return 0;
        }
        else if(arr[i]+brr[i]<arr[i+1])
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
}