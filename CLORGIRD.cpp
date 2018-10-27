/*
 Time & Date of creation 20:30:51 27/10/2018  
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
        int n,m;
        cin>>n>>m;
        int boom[n][m];
        int beem[n][m];

        for(int i=0;i<n;i++)
        {
            // string xx;
            // cin>>xx;
            for(int j=0;j<m;j++)
            {
            char ss;

                cin>>ss;
                // ss=xx[j];
                if(ss=='.')
                    boom[i][j]=0;
                else
                    boom[i][j]=1;

                beem[i][j]=0;
            }
        }

        int a,b,c,d;

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                    a=boom[i][j];
                    b=boom[i+1][j];
                    c=boom[i][j+1];
                    d=boom[i+1][j+1];

                if((a+b+c+d)==0)
                {
                    beem[i][j]=1;
                    beem[i+1][j]=1;
                    beem[i][j+1]=1;
                    beem[i+1][j+1]=1;
                }
                // else continue;
            }
        }

        int cc;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(boom[i][j]== 0 && beem[i][j]==0)
                    {
                        cc++;
                        break;
                    }

                    if(cc>0)
                    break;
            }
        }
        // cout<<"YES"<<endl;
        if(cc==0)
                cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        // for(int )

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<boom[i][j];
        //     }
        //     cout<<endl;
        // }

    }

}