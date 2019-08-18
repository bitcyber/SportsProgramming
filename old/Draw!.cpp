/*
 Time & Date of creation 21:38:28 25/02/2019  
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

#define ff  first
#define ss  second
#define mp  make_pair
#define pb  push_back
#define N 100001
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast_IO;
    ll n;

    cin>>n;
    int a,b, s1=0,s2=0;
    int count =0;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;

        int start = max(s1,s2);
        int end = min(a,b);

        s1=a;
        s2=b;

        if(end ==a)
        {
            s1++;
        }
        else
        {
            s2++;
        }

        if(start<=end)
        {
            count+=end-start+1;
        }

    }
    cout<<count<<endl;
}