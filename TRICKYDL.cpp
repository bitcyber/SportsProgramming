/*
 Time & Date of creation 20:18:49 23/02/2019  
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
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        // cout<<n;

        int i=1;
        ll sum=pow(2,0);
        ll diff = INT_MAX;
        int d2=0;
        while(sum<i*n)
        {
            ll tmp = sum - (i*n);

            if(diff>tmp)
            {
                d2=i;
                diff = tmp;
            }

            sum+=pow(2,i);
            i++;

        }
        // cout<<endl;
        int d1=i-1;
        // int d2;
        cout<<d1<<" "<<d2<<endl;
    }

}