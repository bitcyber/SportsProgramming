/*
 Time & Date of creation 17:17:55 28/10/2018  
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


int arr[100010]={0};

int main()
{
    fast_IO;
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;
        ll tmp1,tmp2,tmp3;
        // map<pair<ll,ll>,ll > mm;
        // map<pair<ll,ll>,ll >::iterator itr1,itr2;
        int maxi=0;

        for(int i=0;i<n;i++)
        {
            cin>>tmp1>>tmp2;
            // tmp3=arr[tmp1];

            if(tmp2>maxi)
                maxi=tmp2;

            tmp3++;
            for(int j=tmp1;j<=tmp2;j++)
            {cout<<endl;
                arr[j]+=1;
            for(int i=1;i<=maxi;i++)
                cout<<arr[i]<< " ";

            }

        }
        // for(int i=1;i<=maxi;i++)
        //     cout<<arr[i]<< " ";

        cout<<endl;


    }

}