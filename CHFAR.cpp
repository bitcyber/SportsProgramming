/*
 Time & Date of creation 02:08:10 28/10/2018  
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
        int n,k;
        cin>>n>>k;

        vi aa,bb;
        ll sum1=0,sum2=0;

        for(int i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            if(tmp!=1)
                sum1+=1;
            // aa.pb(tmp);
            // sum1+=tmp;
            // bb.pb(tmp);
            // sum2+= tmp*tmp;
        }

        if(sum1<=k)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


        // sort(aa.begin(),aa.end(),greater<int>());

        // // ll diff = sum2-sum1;
        // int tmp=0;

        // for(int i=0;i<k;i++)
        // {
        //     // cout<<aa[i]<<" ";

        //     tmp += aa[i]-1;
        //     aa[i]=1;

        //     // sum2+=aa[i]*aa[]

        // }
        // sum2=0;
        // for(int i=0;i<n;i++)
        // {
        //     sum2+= (aa[i]*aa[i])
        // }

        // sum1-=tmp;

        // if(sum2<=sum1)


    }

}