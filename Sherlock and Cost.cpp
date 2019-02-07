/*
 Time & Date of creation 21:17:28 04/02/2019  
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
        ll n;
        cin>>n;
        vi brr;
        for(int i=0;i<n;i++)
        {
            int xx;
            cin>>xx;
            brr.push_back(xx);
        }

        vi cc;
        int tmp=1;

    int sum1=0,sum2=0;
    for(int j=0;j<2;j++)
    {
        cc.pb(tmp);
        for(int i=1;i<n-1;i++)
        {
            int tmp1 = abs(brr[i]-tmp)+abs(brr[i+1]-brr[i]);
            int tmp2 = abs(1-tmp) + abs(brr[i+1]-1);

            if(tmp1<tmp2)
                {
                    tmp = 1 ;
                }
            else
             {
                    tmp =brr[i];
             }

             cc.pb(tmp);
        }
        tmp = brr[0];

        if(abs(brr[n-1]-cc[n-2])>=abs(1-cc[n-2]))
            cc.pb(brr[n-1]);
        else cc.pb(1);

        int tmpsum=0;

        for(int i=0;i<n;i++)
        {
            tmpsum+= abs(cc[i+1]-cc[i]);
            cout<<cc[i]<<" ";
        }
        cout<<endl;

        if(j==0)
            sum1=tmpsum;
        else
            sum2=tmpsum;
        cc.clear();
        }
        cout<<endl<<sum1<<" "<<sum2<<endl;

        // if(sum1<sum2)
        //     cout<<sum1<<endl;
        // else cout<<sum2<<endl;



    }

}