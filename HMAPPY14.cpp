/*
 Time & Date of creation 17:38:57 04/11/2018  
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
    int tmp1;

    int n,q,k;

    fast_IO;
    cin>>n>>q>>k;
    tmp1=2*n+100;

    vector<bool> aa(tmp1);
    for(int i=1;i<=n;i++)
    {
        int tmp2 = tmp1-n+i;
        cin>>aa[tmp2];
    }

    string ss;
    cin>>ss;

    int started =tmp1-n+1;
    int ended = started+n;
    int mini=0;

    // for(int i=started;i<ended;i++)
    //     cout<<aa[i]<<" ";
    // cout<<"before "<<endl;


    for(int i=0;i<ss.size();i++)

    {
        char cc = ss[i];

        if(cc=='!')
        {
            started--;
            aa[started]=aa[ended-1];
            ended--;

            // for(int j=started;j<ended;j++)
            //     cout<<aa[j]<<" ";
            //     cout<<endl;
        }
        else
        {
            int count=0;
            for(int j=started;j<ended;j++)
            {
                if(count==k)
                    {
                        mini=count;
                        break;
                    }
                if(aa[j]==1)
                {
                    count++;
                    if(mini<count)
                        mini=count;
                }
                else
                    count=0;
            }
            cout<<mini<<endl;
        }
    }





    // for(int i=1;i<=n;i++)
    // {
    //     int tmp2 = tmp1-n+i;
    //     cout<<aa[tmp2]<<" ";
    // }

}