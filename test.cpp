/*
 Time & Date of creation 23:54:22 06/02/2019  
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
        ll n,k,m;
        cin>>n>>k>>m;

        ll box =n;
        int count =0;
        double tot_prob =0,cur_prob=0;

        tot_prob=double(1)/double(n);

        for(int i=1;i<=m;i++)
        {
            box =n;
            int first_time =1;

            for(int j=1;j<i;j++)
            {
                cout<<"no of boxes: "<<box<<endl;

                if(box>k)
                {
                    box=box%k;
                    continue;
                }
                if(first_time)
                {
                    cur_prob = double(box-1)/double(box);
                    box+=k;
                    first_time=0;
                }
                else
                {
                    cur_prob*= double(box-1)/double(box);
                    box+=k;
                }
            // cout<<"current probability : "<<cur_prob<<endl;
            }
            cur_prob*=double(1)/double(box);
            tot_prob+=cur_prob ;
            cout<<"current probability : "<<cur_prob<<endl;
            cur_prob=0;

        }
        tot_prob=tot_prob;

        cout<<"total probability : "<<tot_prob<<endl;


    }

}