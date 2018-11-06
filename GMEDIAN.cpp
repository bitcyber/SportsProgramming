/*
 Time & Date of creation 18:48:57 05/11/2018  
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
        int n;
        cin>>n;

        vi aa(n+1);
        vi arr(2*n+1);

        for(int i=1;i<=n;i++)
        {
            cin>>aa[i];
            arr[aa[i]]=1;
        }

        sort(aa.begin(),aa.end());


        ll count=0;
        for(int k=1;k<=n;k++)
        {
            // for(int i=1;i<=n-k)
            int j=1;
            if(k%2==1)
            {

                while(j<=n)
                {
                    if(aa[j])
                    if(arr[aa[j]]==1)
                    {
                        count+=1;
                    }
                    j+=k;
                }

            }
            else
            {
                while(j+k<=n)
                {
                    int lk=aa[j]+aa[j+k];
                    if((lk)%2==0)
                    {
                        if(arr[lk]==1)
                        count+=1;
                    }
                    j+=1;
                }
            }
        }

        cout<<count%mod<<endl;


        // for(int i=1;i<=n;i++)
        // {
        //     cout<<aa[i]/2<<" "<<arr[aa[i]/2]<<" "<<endl;
        // }
    }

}