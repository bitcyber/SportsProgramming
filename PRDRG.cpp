/*
 Time & Date of creation 08:50:59 03/11/2018  
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
        int a;
        cin>>a;
        double sum=0;
        // for(int i=1;i)
        for(int i=1;i<=a;i++)
        {
            if(i%2==0)
            {
                sum-=1/(double(pow(2,i)));
            }
            else
            {
                sum+= 1/(double(pow(2,i)));
            }
        }

        cout<<long(long(pow(2,a))*sum)<<" "<<long(pow(2,a))<<" ";
        // cout<<i<<""
        // foo(sum);
        // cout<<1<<" "<<ll(pow(2,a))<<" ";

    }
    cout<<endl;

}