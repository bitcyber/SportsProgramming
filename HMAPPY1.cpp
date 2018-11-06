/*
 Time & Date of creation 20:33:39 03/11/2018  
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
    // cout<<xx.size();
    vi bb(aa);
    int mini =0;
    ll t1 = bb.size();
    for(int i=0;i<ss.size();i++)
    {
        char cc=ss[i];
        // cout<<cc<<" ";
        if(cc=='!')
        {
            bb.insert(bb.begin(),bb[t1-1]);
            bb.resize(t1);
        }
        else
        {
            int count=0;
            for(int j=0;j<t1;j++)
            {
                if(count==k)
                    {
                        mini=count;
                        break;
                    }
                else if(bb[j]==1)
                {
                    count++;
                }
                else
                {
                    if(mini<count)
                        {
                            mini=count;
                        }

                    count=0;
                }
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

   ll y = lcs(aa,ss);
}