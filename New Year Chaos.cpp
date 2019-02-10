/*
 Time & Date of creation 14:43:12 10/02/2019  
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

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        vi arr;
        for(int i=0;i<n;i++)
        {
            int xx;
            cin>>xx;
            arr.pb(xx);
        }

        ll sum=0;
        int flag =0;
        for(int i=0;i<n;i++)
        {
            int xx = abs(arr[i]-(i+1));
            if(xx>2)
            {

                flag=1;
                break;
            }
            else
            {
                sum+=xx;
            }
        }
        if(flag!=1)
            cout<<sum/2<<endl;
        else
        cout<<"Too chaotic"<<endl;
    }

}