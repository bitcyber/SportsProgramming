/*
 Time & Date of creation 19:07:14 30/10/2018  
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
    int n,k;
    cin>>n>>k;
    vi aa(n),bb(n);

    for(int i=0;i<n;i++)
        {
            cin>>aa[i];
            bb[i]=aa[i];
        }

        int sum=0;


    for(int i=1;i<n;i++)
    {
        int t1;
        t1= k-(aa[i]+bb[i-1]);
        // t2=aa[i];
        // t3 = aa[i+1]
        if(t1>=0)
            {
                bb[i]+=t1;
                sum+=t1;
            }
    }

    cout<<sum<<endl;

    for(int i=0;i<n;i++)
        cout<<bb[i]<<" ";

    cout<<endl;



}