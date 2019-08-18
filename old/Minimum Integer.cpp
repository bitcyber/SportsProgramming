/*
 Time & Date of creation 11:11:14 25/01/2019  
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
        ll l,r,d;
        cin>>l>>r>>d;

        if(d ==1)
        {
            if(l>1)
            cout<<d<<endl;
            else cout<<r+1<<endl;
            continue;
        }
        if(l/d ==0 || (l/d ==1 && l%d==0 ))
           cout<<((r/d)+1)*d<<endl;
        else if(l/d==1 && l%d!=0)
            cout<<(l/d)*d<<endl;
    }


}