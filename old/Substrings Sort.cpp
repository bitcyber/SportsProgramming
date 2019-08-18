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

bool cmp(string s1,string s2)
{
    int l1 = s1.size();
    int l2 = s2.size();
    return l1<l2;

}

int main()
{
    fast_IO;
    int n;
    cin>>n;

    vector<string> ss(n);

    for(int i=0;i<n;++i)
    {
        cin>>ss[i];
    }
    sort(ss.begin(),ss.end(),cmp);

    for(int i=0;i<n-1;++i)
    {
        if(ss[i+1].find(ss[i])==string::npos)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    for(auto it:ss)
        cout<<it<<endl;

    return 0;

}