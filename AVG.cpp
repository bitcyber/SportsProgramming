/*
 Time & Date of creation 19:42:18 23/02/2019  
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
        ll n,k,v;
        cin>>n>>k>>v;
        vi arr(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        // float avg = float(sum)/float(n);
        float  temp = (float(v)*float(n+k)-float(sum));

        if(temp<=0)
            {
                cout<<-1<<endl;
                // continue;
            }
        else if(int(temp)%k !=0)
        {
                cout<<-1<<endl;
        }
        else
        {
            cout<<int(temp)/k<<endl;
        }

    }
}