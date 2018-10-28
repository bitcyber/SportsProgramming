/*
 Time & Date of creation 02:28:45 28/10/2018  
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
        ll n,k;
        cin>>n>>k;
        if((n-k)<0 || k<=0)
            {
                cout<<-1<<endl;
                continue;
            }

        ll tmp1,rem1;
        tmp1 = ceil(float(n)/float(k));

        cout<<endl;
        // cout<<"t1 "<<tmp1<<endl;
        if(n%k==0)
            rem1=0;
        else
            rem1 = n-tmp1*(k-1);
        // cout<<"r1 "<<rem1<<endl;

        ll tmp2,rem2;
        tmp2 = ceil(float(n-k)/float(k));
        // cout<<"t2 "<<tmp2<<endl;
        if(n%k==0)
            rem2=0;
        else
            rem2 = n-k-tmp2*(k-1);
        // cout<<"r2 "<<rem2<<endl;

        ll res1,res2;

        if(rem1==0)
            {
                res1 = tmp1*k;
            }
        else
        {
            res1= tmp1*(k-1)*rem1;
        }

        if(rem2==0)
            {
                res2 = tmp2*k;
            }
        else
        {
            res2= tmp2*(k-1)*rem2;
        }

        // cout<<"res1 "<<res1<< " ,res2 "<<res2<<endl;

        cout<<(res1*res2)%mod<<endl;

    }

}