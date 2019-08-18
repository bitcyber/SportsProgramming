/*
 Time & Date of creation 13:44:26 04/11/2018  
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

ll n,q,k;
ll lcs (const vi & aa,string &ss)
{
    int start = 0;
    int ended = aa.size();
    int n=aa.size();
    // cout<<n<<endl;
    vi bb(aa);
    int mini=0;

    for(int i=0;i<ss.size();i++)
    {
        char cc = ss[i];

        if(cc=='!')
        {
            bb.pb(bb[start]);
            start++;
            ended++;
            // cout<<"after ! "<<endl;
            // for(int j=start;j<ended;j++)
            // {
            //     cout<<bb[j]<<" ";
            // }
            // cout<<endl;
        }
        else
        {
            int count=0;

            for(int j=ended-1;j!=start-1;j--)
            {
                // cout<<"j "<<j<<endl;

                if(count==k)
                {
                    mini=count;
                    break;
                }
                if(bb[j]==1)
                {
                    // cout<<" j "<<j<<endl;
                    count++;
                    if(mini<count )
                        {
                            mini=count;
                        }
                }
                else
                    count=0;
            }
            cout<<mini<<endl;
        }
    }
}
int main()
{
    fast_IO;

    cin>>n>>q>>k;
    vi aa;
    for(ll i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            aa.pb(tmp);
        }
    string ss;
    cin>>ss;

    // cout<<ss.size()<<ss<<endl;

    // if(n==1)
    // {
    //     for(int i=0;i<ss.size();i++)
    //     {
    //         char st=ss[i];
    //         if(st=='?')
    //             {
    //                 if(aa[0]==1)
    //                 cout<<1<<endl;
    //                 else if(aa[0]==0)
    //                 cout<<0<<endl;
    //             }
    //     }
    // }
    // else
   ll y = lcs(aa,ss);
}