/*
 Time & Date of creation 19:09:55 07/02/2019  
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
    ll b,k;
    cin>>b>>k;
    vi arr;
    ll count_even=0,count_odd=0;
    for(int i=0;i<k;i++)
    {
        int xx;
        cin>>xx;
        arr.pb(xx);
        if(xx%2==0)
            count_even++;
        else
            count_odd++;
    }
    if(b%2==0)
    {
        if(arr[k-1]%2==0)
            {
                cout<<"even"<<endl;
            }
        else {
            cout<<"odd"<<endl;
            }

    }
    else
    {
        if(count_odd%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }

}