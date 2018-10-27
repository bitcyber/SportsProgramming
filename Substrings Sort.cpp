/*
 Time & Date of creation 14:32:42 27/10/2018  
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
    int n;
    cin>>n;

    vector<string> ss;

    for(int i=0;i<n;i++)
    {
        string tmp;
        cin>>tmp;
        ss.pb(tmp);
    }

    // sort(ss.begin(),ss.end());
    // for(auto v:ss)
    //     cout<<v<<endl;
    bool flag =0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ss[i])
        }
    }



}