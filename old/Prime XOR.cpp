/*
 Time & Date of creation 20:11:26 24/02/2019  
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
#define N 100005
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool* primem()
{
   static bool dpp[N+5];
    for(int i=0;i<N;i++)
        dpp[i]=true;
    int nn =sqrt(N) ;

    for(int i=2;i< nn;i++)
    {
        if(dpp[i]==true)
        {
            for(int j = i*i;j<=N;j+=i)
            {
                dpp[j]=false;
            }
        }
    }
    return dpp;
}




int main()
{
    fast_IO;
    int t;
    cin>>t;
    bool* hola = primem();
    while(t--)
    {
        ll n;
        cin>>n;
        vi arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];


    }

}