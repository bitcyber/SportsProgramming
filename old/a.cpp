/*
 Time & Date of creation 16:57:15 26/01/2019  
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
    int t;
    cin>>t;
    while(t--)
    {
        vi arr;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int xx;
            cin>>xx;
            arr.push_back(xx);
        }
        sort(arr.begin(),arr.end());

        int ttt = ceil(float(n)/float(2));
        int tmp=arr[n-1];

        vi tmparr;
        for(int i=0;i<ttt;i++)
        {

            tmparr.push_back(arr[i]);
            tmparr.push_back(arr[n-i-1]);
        }
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            // cout<<tmparr[i]<<" ";
            sum+=abs(tmparr[i]-tmparr[i+1]);

            //  cout<<abs(tmparr[i]-tmparr[i+1])<<endl;
        }
        cout<<sum<<endl;
    }

}